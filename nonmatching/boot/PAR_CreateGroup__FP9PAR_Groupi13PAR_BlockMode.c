/* PAR_CreateGroup__FP9PAR_Groupi13PAR_BlockMode 0x01E7AE80 (14 November 2026).
 * Measured pinned: 6 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct PAR_Group {
    struct PAR_Group *list[4];
    short count;
    unsigned char mode;
    unsigned char max;
} PAR_Group;

typedef struct {
    unsigned char pad[8];
    unsigned short size;
    unsigned char pad2[0x1E];
} tParBlock;

extern tParBlock par_blocks[];
extern int D_01F1E958[];

void PAR_CreateGroup__FP9PAR_Groupi13PAR_BlockMode(PAR_Group *group, int count, int mode) {
    tParBlock *block = &par_blocks[count];

    group->count = count;
    group->list[0] = group;
    group->list[1] = group;
    group->list[2] = group;
    group->list[3] = group;
    group->mode = mode;
    group->max = D_01F1E958[mode] / block->size - 1;
}
