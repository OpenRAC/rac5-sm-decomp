/* LEVEL_17:0x110040 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_001A8194;
extern Rec D_002CD7B8[];
extern void *memset(void *, int, unsigned int);

int func_110040(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_002CD7B8[index], 0, sizeof(Rec));
    selected = index == D_001A8194;
    D_002CD7B8[index].tail = 0;
    if (selected) {
        D_001A8194 = -1;
    }
    return 1;
}
