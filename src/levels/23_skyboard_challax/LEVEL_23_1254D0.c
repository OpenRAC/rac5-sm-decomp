/* LEVEL_23:0x1254D0 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_001DA484;
extern Rec D_0035FB58[];
extern void *memset(void *, int, unsigned int);

int func_1254D0(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_0035FB58[index], 0, sizeof(Rec));
    selected = index == D_001DA484;
    D_0035FB58[index].tail = 0;
    if (selected) {
        D_001DA484 = -1;
    }
    return 1;
}
