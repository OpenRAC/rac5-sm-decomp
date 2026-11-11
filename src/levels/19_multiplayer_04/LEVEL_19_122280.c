/* LEVEL_19:0x122280 -- placement copy of LEVEL_16_121918.c: fills an item's text fields and publishes its values to the shared UI state. */
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

extern char *D_001E0228;
extern char D_001D1438[];
extern char D_001D1440[];
extern char *func_10F9D0(int id);
extern char *func_096570(char *dst, const char *src, unsigned int n);
extern int sprintf(char *, const char *, ...);

void func_122280(Item *it, void *unused1, void *unused2)
{
    if (it->f4 < 0) {
        func_096570(it->t38, func_10F9D0(0x785), 0x14);
    } else {
        func_096570(it->t38, func_10F9D0(it->tab34[it->f4]), 0x14);
    }
    if (it->f8 < 0) {
        func_096570(it->t50, func_10F9D0(0x785), 0x14);
    } else {
        func_096570(it->t50, func_10F9D0(it->tab4C[it->f8]), 0x14);
    }
    func_096570(it->t68, func_10F9D0(it->tab64[it->fC]), 0xA);
    if (it->f10 == 0) {
        func_096570(it->t72, func_10F9D0(0x6D2), 0xA);
    } else {
        sprintf(it->t72, D_001D1438, it->f10);
    }
    if (it->f14 == 0) {
        func_096570(it->t7C, func_10F9D0(0x6D2), 0xA);
    } else {
        sprintf(it->t7C, D_001D1438, it->f14);
    }
    if (it->f18 == 0) {
        func_096570(it->t86, func_10F9D0(0x6D2), 0xA);
    } else {
        sprintf(it->t86, D_001D1438, it->f18);
    }

    sprintf(it->t20, D_001D1440, it->f0 ? func_10F9D0(0xA09) : func_10F9D0(0xA0A));
    *(char *)(D_001E0228 + 0x17C) = 1;
    *(int *)(D_001E0228 + 0x180) = it->f8 + 0x10;
    *(int *)(D_001E0228 + 0x184) = it->f4;
    *(int *)(D_001E0228 + 0x18C) = it->fC;
    *(int *)(D_001E0228 + 0x190) = it->f14;
    *(int *)(D_001E0228 + 0x194) = it->f1C;
    *(int *)(D_001E0228 + 0x188) = it->f0;
    *(int *)(D_001E0228 + 0x198) = 0;
    if (*(int *)(D_001E0228 + 0x188) == 0) {
        *(int *)(D_001E0228 + 0x19C) = 0;
    } else {
        *(int *)(D_001E0228 + 0x19C) = 1;
    }
}
