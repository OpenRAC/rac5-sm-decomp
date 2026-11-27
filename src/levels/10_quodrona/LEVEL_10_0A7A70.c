/* LEVEL_10:0x0A7A70 -- placement copy of LEVEL_01_0A6958.c: returns 1 when both handles of chunk 6 are set and the second table address is not -1. */
typedef struct {
    unsigned char pad[0x1800];
    int h;
    int h2;
    unsigned char rest[0x10000 - 0x1808];
} Chunk;

extern Chunk D_002BD130[];
extern char D_002FE130[];

long long func_0A7A70(void)
{
    long long result = 0;
    int t;

    if (D_002BD130[6].h != -1) {
        if (D_002BD130[6].h2 != -1) {
            t = (int)D_002FE130 != -1;
            result = t;
        }
    }
    return result;
}
