/* LEVEL_05:0x1AF8F0 -- placement copy of LEVEL_01_1B3568.c: registers an embedded record of the object with the shared player's id, then reports success. */
typedef struct {
    char pad[0xF8];
    int wF8;
} Player;

extern Player *D_001E3964;
extern void func_0227D0(char *record, int kind, int id, int flag);

int func_1AF8F0(char *o)
{
    func_0227D0(o + 0x74, 9, D_001E3964->wF8, -1);
    return 1;
}
