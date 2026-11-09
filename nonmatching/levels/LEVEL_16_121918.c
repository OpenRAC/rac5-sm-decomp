/* LEVEL_16.REL:0x121918: reviewed 628-byte candidate, held for ABI review.
 * Fills an item's text fields and publishes its values to the shared UI state.
 * pinned C with gnu-ee-trial links 628/628 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_096CE0 returning void with (pointer, pointer, int), but the
 * accepted LEVEL_16_096CE0.c defines it returning pointer with (pointer,
 * pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Item {
    int f0, f4, f8, fC, f10, f14, f18, f1C;
    char t20[0x14];
    int *tab34;
    char t38[0x14];
    int *tab4C;
    char t50[0x14];
    int *tab64;
    char t68[0xA];
    char t72[0xA];
    char t7C[0xA];
    char t86[0xA];
} Item;

extern char *D_001E00A8;
extern char D_001D0238[];
extern char D_001D0240[];
extern char *func_10F330(int id);
extern void func_096CE0(char *dst, char *src, int n);
extern int sprintf(char *, const char *, ...);

void func_121918(Item *it)
{
    if (it->f4 < 0) {
        func_096CE0(it->t38, func_10F330(0x785), 0x14);
    } else {
        func_096CE0(it->t38, func_10F330(it->tab34[it->f4]), 0x14);
    }
    if (it->f8 < 0) {
        func_096CE0(it->t50, func_10F330(0x785), 0x14);
    } else {
        func_096CE0(it->t50, func_10F330(it->tab4C[it->f8]), 0x14);
    }
    func_096CE0(it->t68, func_10F330(it->tab64[it->fC]), 0xA);
    if (it->f10 == 0) {
        func_096CE0(it->t72, func_10F330(0x6D2), 0xA);
    } else {
        sprintf(it->t72, D_001D0238, it->f10);
    }
    if (it->f14 == 0) {
        func_096CE0(it->t7C, func_10F330(0x6D2), 0xA);
    } else {
        sprintf(it->t7C, D_001D0238, it->f14);
    }
    if (it->f18 == 0) {
        func_096CE0(it->t86, func_10F330(0x6D2), 0xA);
    } else {
        sprintf(it->t86, D_001D0238, it->f18);
    }

    sprintf(it->t20, D_001D0240, it->f0 ? func_10F330(0xA09) : func_10F330(0xA0A));
    *(char *)(D_001E00A8 + 0x17C) = 1;
    *(int *)(D_001E00A8 + 0x180) = it->f8 + 0x10;
    *(int *)(D_001E00A8 + 0x184) = it->f4;
    *(int *)(D_001E00A8 + 0x18C) = it->fC;
    *(int *)(D_001E00A8 + 0x190) = it->f14;
    *(int *)(D_001E00A8 + 0x194) = it->f1C;
    *(int *)(D_001E00A8 + 0x188) = it->f0;
    *(int *)(D_001E00A8 + 0x198) = 0;
    if (*(int *)(D_001E00A8 + 0x188) == 0) {
        *(int *)(D_001E00A8 + 0x19C) = 0;
    } else {
        *(int *)(D_001E00A8 + 0x19C) = 1;
    }
}
