/* LEVEL_24:0x1725C8 -- clears the object's 0x4C-byte record, registers its slot, wires the record into the handler table, and configures the shared block's samples and scales. */
typedef struct Block Block;
typedef struct Sample Sample;

typedef struct Game {
    char pad_00[0xF8];
    int slot;
} Game;

extern Game *D_001C5264;
extern Sample D_001F1B38;
extern Sample D_001F1B48;
extern char D_001E0308[];

extern void *memset(void *, int, unsigned int);
extern void func_0215B0(char *p, int a, int b, int c);
extern void func_072940(char *p, int a, int b, int c, char *table);
extern void func_064408(Block *blk, Sample *first, Sample *second, int mode,
                        float fx, float fy, float fz);

int func_1725C8(char *object)
{
    char *rec = *(char **)(object + 0x58);

    memset(rec, 0, 0x4C);
    func_0215B0(object + 0x74, 4, D_001C5264->slot, -1);
    func_072940(rec + 0x20, 1, 0x44, 0x45, D_001E0308);
    func_064408((Block *)D_001C5264, &D_001F1B38, &D_001F1B48, 0, 1.2f, 0.3f, 10.0f);
    return 1;
}
