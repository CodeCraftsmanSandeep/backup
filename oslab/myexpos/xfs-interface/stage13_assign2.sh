load --os $HOME/oslab/stage13/os_startup.xsm
load --module 7 $HOME/oslab/stage13/assign1/boot.xsm
load --init $HOME/oslab/stage13/assign1/even.xsm
load --int=7 $HOME/oslab/stage10/write_code.xsm
load --int=timer $HOME/oslab/stage13/assign2/sample_timer.xsm
load --exhandler $HOME/oslab/stage9/haltprog.xsm
load --int=10 $HOME/oslab/stage9/haltprog.xsm
load --library ../expl/library.lib
load --idle $HOME/oslab/stage12/idle_code.xsm
load --exec $HOME/oslab/stage13/assign1/odd.xsm
