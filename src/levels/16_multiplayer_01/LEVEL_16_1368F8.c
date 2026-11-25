/* LEVEL_16:0x1368F8 -- appends the value to the global table unless it is already present. */
extern int D_001BD700;
extern char *D_002E2C20[];

void func_1368F8(char *value)
{
    unsigned int i;

    for (i = 0; i < D_001BD700; i++) {
        if (D_002E2C20[i] == value) {
            break;
        }
    }
    if (i == D_001BD700) {
        D_002E2C20[i] = value;
        D_001BD700 = i + 1;
    }
}
