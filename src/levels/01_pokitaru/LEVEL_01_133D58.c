/* LEVEL_01:0x133D58 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_00207084;
extern Rec D_0038E618[];
extern void *memset(void *, int, unsigned int);

int func_133D58(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_0038E618[index], 0, sizeof(Rec));
    selected = index == D_00207084;
    D_0038E618[index].tail = 0;
    if (selected) {
        D_00207084 = -1;
    }
    return 1;
}
