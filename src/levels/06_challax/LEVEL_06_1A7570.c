/* LEVEL_06:0x1A7570 -- placement copy of LEVEL_01_1B3568.c: registers an embedded record of the object with the shared player's id, then reports success. */
typedef struct {
    char pad[0xF8];
    int wF8;
} Player;

extern Player *D_001E34E4;
extern void func_021DD8(char *record, int kind, int id, int flag);

int func_1A7570(char *o)
{
    func_021DD8(o + 0x74, 9, D_001E34E4->wF8, -1);
    return 1;
}
