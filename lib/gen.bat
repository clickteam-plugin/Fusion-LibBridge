del mmfs2*-*.txt

DUMPBIN /SYMBOLS mmfs2.lib    > mmfs2-symbols.txt
DUMPBIN /SYMBOLS mmfs2hwa.lib > mmfs2hwa-symbols.txt
DUMPBIN /SYMBOLS mmfs2u.lib   > mmfs2u-symbols.txt

DUMPBIN /EXPORTS mmfs2.lib    > mmfs2-exports.txt
DUMPBIN /EXPORTS mmfs2hwa.lib > mmfs2hwa-exports.txt
DUMPBIN /EXPORTS mmfs2u.lib   > mmfs2u-exports.txt
