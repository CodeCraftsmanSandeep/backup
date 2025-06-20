load --os $HOME/oslab/stage13/os_startup.xsm
load --module 0 $HOME/oslab/stage15/mod_0.xsm
load --module 4 $HOME/oslab/stage16/mod_4.xsm
load --module 5 $HOME/oslab/stage14/scheduler.xsm
load --module 7 $HOME/oslab/stage16/boot.xsm
load --init $HOME/oslab/stage16/gcd.xsm
load --int=timer $HOME/oslab/stage14/timer.xsm
load --int=console $HOME/oslab/stage16/int_3.xsm
load --int=6 $HOME/oslab/stage16/int_6.xsm
load --int=7 $HOME/oslab/stage15/int_7.xsm
load --exhandler $HOME/oslab/stage9/haltprog.xsm
load --int=10 $HOME/oslab/stage14/int_10.xsm
load --library ../expl/library.lib
load --idle $HOME/oslab/stage12/idle_code.xsm
