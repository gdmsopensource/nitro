import os
import Scripting, Options
from Build import BuildContext

VERSION = '2.7-dev'
APPNAME = 'nitro'
srcdir  = '.'
blddir  = 'target'

def set_options(opt):
    opt.tool_options('build', tooldir='build')
    opt.sub_options('c c++ java python external')

def configure(conf):
    conf.env['APPNAME'] = APPNAME
    conf.env['VERSION'] = VERSION
    conf.check_tool('build', tooldir='build')
    conf.sub_config('c c++ java python external')

def build(bld):
    bld.add_subdirs('c c++ java python external')

def distclean(context):
    context.recurse('c c++ java python external')
    Scripting.distclean(context)

def init(context):
    """
    Override the lockfile - which allows you to build on multiple platforms
    from the same sandbox without needing to re-configure every time you swap
    between platforms.
    
    In other words, configure once per platform, then you can build for each
    """
    from build import getPlatform
    platform = getPlatform()
    Options.lockfile = '.lock-%s' % platform
