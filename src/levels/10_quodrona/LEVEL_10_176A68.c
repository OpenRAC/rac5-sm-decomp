/* LEVEL_10:0x176A68 -- classifies an object: -1 when it is in state 9 and the second check fails, 1 when its float at 0x7C exceeds a tiny threshold, otherwise 0. */
typedef struct {
    char pad0[0x7C];
    float f7C;
} Obj;

extern int func_173020(char *object);
extern int func_173228(unsigned char *a0);

int func_176A68(void *unused, Obj *o)
{
    if (func_173020((char *)o) != 9 || func_173228((unsigned char *)o) != 0) {
        if (0.0001f < o->f7C) {
            return 1;
        }
        return 0;
    }
    return -1;
}
