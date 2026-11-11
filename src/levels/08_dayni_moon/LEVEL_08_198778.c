/* LEVEL_08:0x198778 -- placement copy of LEVEL_03_17B1A0.c: initialises the object's state block (+0x58: halfword -1, byte 2, owner, float 0.2, zero word), sets the two object bytes at +0x76/+0x77, and when the first linked record's type word matches, registers the object's bit with the record and runs the two follow-up routines; returns 1 on success, 0 otherwise. */
typedef struct {
    char pad[0x58];
    void *set;
} Obj;

struct Obj23;

extern int func_196BF0(Obj *obj, int unused, int bit);
extern void func_1986A8(struct Obj23 *s0);
extern void func_198710(char *object);

int func_198778(char *object)
{
    char *state;
    int *info;
    char *rec;

    state = *(char **)(object + 0x58);
    info = *(int **)(object + 0x54);
    *(unsigned char *)(state + 2) = 2;
    *(unsigned short *)state = 0xFFFF;
    *(char **)(state + 4) = object;
    *(unsigned char *)(object + 0x77) = 0x96;
    *(unsigned char *)(object + 0x76) = 0x32;
    *(float *)(state + 8) = 0.2f;
    *(int *)(state + 0xC) = 0;
    rec = (char *)info[0];
    if (rec != 0) {
        if (*(int *)(*(char **)(rec + 0x40) + 0x24) == 0x5E139936) {
            if (func_196BF0((Obj *)rec, (int)object, info[2]) != 0) {
                func_1986A8((struct Obj23 *)object);
                func_198710(object);
                return 1;
            }
        }
    }
    return 0;
}
