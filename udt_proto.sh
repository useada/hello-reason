cd proto

atdgen -t Proto.atd
atdgen -j Proto.atd

refmt Proto_t.mli > Proto_t.rei
refmt Proto_t.ml > Proto_t.re
refmt Proto_j.mli > Proto_j.rei
refmt Proto_j.ml > Proto_j.re

rm Proto_t.mli Proto_t.ml Proto_j.mli Proto_j.ml