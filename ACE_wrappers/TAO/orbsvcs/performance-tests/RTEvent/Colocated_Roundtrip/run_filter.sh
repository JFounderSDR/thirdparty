#! /bin/sh
#
# $Id: run_filter.sh 14 2007-02-01 15:49:12Z mitza $
#

. parameters

for n in $NTHREADS; do
  for c in $NCONSUMERS; do
    for t in $FILTER_TYPES; do
      date
      echo $t $c $n

      ./driver -ORBSvcConf ec.filter_${t}.conf -x -d -h 10000 -l 10000 -i $ITERATIONS -c $c -n $n > ec_filter.${t}.${c}.${n}.txt 2>&1
    done
  done
done
