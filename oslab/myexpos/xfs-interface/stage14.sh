load --os $HOME/oslab/stage13/os_startup.xsm
load --module 7 $HOME/oslab/stage14/boot.xsm
load --module 5 $HOME/oslab/stage14/scheduler.xsm
load --init $HOME/oslab/stage14/odd.xsm
load --int=7 $HOME/oslab/stage10/write_code.xsm
load --int=timer $HOME/oslab/stage14/timer.xsm
load --exhandler $HOME/oslab/stage9/haltprog.xsm
load --int=10 $HOME/oslab/stage14/int_10.xsm
load --library ../expl/library.lib
load --idle $HOME/oslab/stage12/idle_code.xsm
load --exec $HOME/oslab/stage14/even.xsm
