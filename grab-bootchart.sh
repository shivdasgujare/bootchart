#!/bin/sh
#
# this script is used to retrieve the bootchart log.
#
LOG_ROOT=/bootchart
TMPDIR=/bootchart/bootchart-logs
rm -rf $TMPDIR
mkdir -p $TMPDIR

LOGROOT=/bootchart
TARBALL=bootchart.tgz

FILES="header proc_stat.log proc_ps.log proc_diskstats.log kernel_pacct"

for f in $FILES; do
    cp $LOGROOT/$f $TMPDIR/$f 2>&1 > /dev/null
done
(cd $TMPDIR && tar -czf $TARBALL $FILES)
cp -f $TMPDIR/$TARBALL $LOG_ROOT/$TARBALL

rm -rf $TMPDIR
for f in $FILES; do
    rm -rf $LOGROOT/$f 2>&1 > /dev/null
done
echo "look at $LOG_ROOT/$TARBALL"
