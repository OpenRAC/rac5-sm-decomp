/* LEVEL_10.REL:0x1D98C0: initialize and append a measured record. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern char *func_0A0CF8(int *status, char *owner, int count);
extern void func_1D7D10(void *destination, void *source, int zero,
                        const ThreeWords *position);

void func_1D98C0(char *owner, const ThreeWords *position,
                 const ThreeWords *direction)
{
    int status[4];
    char *record = func_0A0CF8(status, owner, 1);
    if (status[0] != 0) {
        char *source = *(char **)(owner + 0x1C);
        *(float *)(record + 4) = 1.0f;
        *(int *)(record + 0) = 0;
        *(float *)(record + 8) = *(float *)(source + 0xAC);
        *(float *)(record + 12) = *(float *)(source + 0xAC);
        *(ThreeWords *)(record + 16) = *position;
        *(ThreeWords *)(record + 28) = *direction;
        *(int *)(record + 40) = 3;
        func_1D7D10(record + 44, source, 0, position);
    }
}
