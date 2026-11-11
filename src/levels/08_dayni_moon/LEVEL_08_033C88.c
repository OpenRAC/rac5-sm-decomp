/* LEVEL_08:0x033C88 -- placement copy of LEVEL_01_0334E0.c: searches outward from the given cell index, alternating upward and downward, for the nearest cell that contains the point; reports through the flag when the whole range was exhausted without a hit. */
typedef struct Map {
    char pad_00[0x14];
    unsigned short count;
} Map;

typedef struct Obj {
    char pad_00[0x18];
    Map *map;
} Obj;

extern int func_034868(Obj *o, float *pt, unsigned char idx);

unsigned char func_033C88(Obj *o, float *pt, unsigned char index, char *wrapped)
{
    signed char up = index + 1;
    signed char down = index - 1;
    Map *map = o->map;
    int n = 0;
    int topDone = 0;
    int bottomDone = 0;
    unsigned char cur;

    if (wrapped != 0)
        *wrapped = 0;
    if (func_034868(o, pt, index))
        return index;
    while (!bottomDone || !topDone) {
        n++;
        if ((n & 1) != 0 && !topDone) {
            if (up >= map->count - 1) {
                topDone = 1;
            } else {
                cur = up;
                if (func_034868(o, pt, cur))
                    return cur;
                up = up + 1;
            }
        } else {
            if (!bottomDone) {
                if (down < 0) {
                    bottomDone = 1;
                } else {
                    cur = down;
                    if (func_034868(o, pt, cur))
                        return cur;
                    down = down - 1;
                }
            }
        }
    }
    if (wrapped != 0)
        *wrapped = 1;
    return index;
}
