load --os $HOME/oslab/stage13/os_startup.xsm
load --module 7 $HOME/oslab/stage13/boot.xsm
load --init $HOME/oslab/stage11/numbers.xsm
load --int=7 $HOME/oslab/stage10/write_code.xsm
load --int=timer $HOME/oslab/stage12/sample_timer.xsm
load --exhandler $HOME/oslab/stage9/haltprog.xsm
load --int=10 $HOME/oslab/stage9/haltprog.xsm
load --library ../expl/library.lib
load --idle $HOME/oslab/stage12/idle_code.xsm
