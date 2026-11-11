/* LEVEL_19:0x111168 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_001B5D14;
extern Rec D_002DC638[];
extern void *memset(void *, int, unsigned int);

int func_111168(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_002DC638[index], 0, sizeof(Rec));
    selected = index == D_001B5D14;
    D_002DC638[index].tail = 0;
    if (selected) {
        D_001B5D14 = -1;
    }
    return 1;
}
