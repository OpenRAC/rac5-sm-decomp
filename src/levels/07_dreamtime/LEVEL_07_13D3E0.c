/* LEVEL_07:0x13D3E0 -- placement copy of LEVEL_01_13A3A8.c: classifies an object by squared distance to a reference position. */
typedef struct {
    float x;
    float y;
    float z;
} Point;

extern char D_0024AA40[];

int func_13D3E0(char *object)
{
    char *base = D_0024AA40;
    Point *position = (Point *)(object + 0x30);
    Point *reference = (Point *)(base + 0x30);
    float dx = position->x - reference->x;
    float dy = position->y - reference->y;
    float dz = position->z - reference->z;
    float distance = dx * dx + dy * dy + dz * dz;
    if (*(unsigned char *)(object + 0x45) == 4) {
        if (distance > 25.0f)
            goto four;
        goto zero;
    }
    if (!(distance > 36.0f))
        goto zero;
four:
    return 4;
zero:
    return 0;
}
