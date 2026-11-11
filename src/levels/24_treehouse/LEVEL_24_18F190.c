/* LEVEL_24:0x18F190 -- placement copy of LEVEL_01_1B3568.c: registers an embedded record of the object with the shared player's id, then reports success. */
typedef struct {
    char pad[0xF8];
    int wF8;
} Player;

extern Player *D_001C5264;
extern void func_0215B0(char *record, int kind, int id, int flag);

int func_18F190(char *o)
{
    func_0215B0(o + 0x74, 9, D_001C5264->wF8, -1);
    return 1;
}
