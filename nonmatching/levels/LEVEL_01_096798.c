/* LEVEL_01.REL:0x096798, bounded 180-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +30. Not linked into the accepted
 * gate or counted.
 * Reopen: $a1 and $a2 are swapped between the counter and the song pointer. Reopen by changing the declaration order of the counter and pointer.
 */
typedef struct {
    int key;
    int index;
} Pair;

typedef struct {
    int data[10];
} Song;

typedef struct {
    char pad0[0x3C];
    Song songs[256];
    int count;
    unsigned short order[256];
    char pad1[0x209];
    char flag;
} LevelData;

extern LevelData D_00298290;
extern void func_00096758(void);
extern void qsort(void *base, int count, int size, void *compare);

void func_00096798(void)
{
    Pair temp[256];
    int i;
    int count;

    count = D_00298290.count;
    for (i = 0; i != count; i++) {
        temp[i].key = D_00298290.songs[i].data[0];
        temp[i].index = i;
    }
    qsort(temp, D_00298290.count, 8, func_00096758);
    count = D_00298290.count;
    for (i = 0; i != count; i++)
        D_00298290.order[i] = (unsigned short)temp[i].index;
    D_00298290.flag = 0;
}
