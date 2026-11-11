/* LEVEL_17:0x016708 -- copies the packed vertex the level keeps for the
   given address into the caller's vertex. */
typedef struct {
    float f[16];
} Block;

typedef struct {
    char pad[0x44];
    int first;
} Rec;

extern Rec *D_1A7EA0;
extern char **D_18E454;

void func_016708(char *dst)
{
    Rec *rec = D_1A7EA0;
    char *base = D_18E454[0];
    int slot = ((int)dst - rec->first) >> 7;
    int off = slot * 80;

    *(Block *)dst = *(Block *)(base + off);
}
