/* LEVEL_04.REL:0x1EAC98: initialize and append a measured record. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern char *func_0A4E30(int *status, char *owner, int count);
extern void func_1E90E8(void *destination, void *source, int zero,
                        const ThreeWords *position);

void func_1EAC98(char *owner, const ThreeWords *position,
                 const ThreeWords *direction)
{
    int status[4];
    char *record = func_0A4E30(status, owner, 1);
    if (status[0] != 0) {
        char *source = *(char **)(owner + 0x1C);
        *(float *)(record + 4) = 1.0f;
        *(int *)(record + 0) = 0;
        *(float *)(record + 8) = *(float *)(source + 0xAC);
        *(float *)(record + 12) = *(float *)(source + 0xAC);
        *(ThreeWords *)(record + 16) = *position;
        *(ThreeWords *)(record + 28) = *direction;
        *(int *)(record + 40) = 3;
        func_1E90E8(record + 44, source, 0, position);
    }
}
