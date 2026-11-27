/* LEVEL_08:0x1E95E8 -- placement copy of LEVEL_01_1B3468.c: stores a field of the object, then publishes the entries found by two keyed table searches into two globals. */
typedef struct { char pad00[0x24]; unsigned int id; char pad28[0x1C]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
typedef struct { char pad00[0x0C]; int w0C; } Obj;
extern Tab *D_0024FC50;
extern int D_00252558[1];
extern Ent *D_0025255C[1];
extern Ent *D_00252560;

void func_1E95E8(Obj *o)
{
    Ent *r;
    unsigned int i;

    D_00252558[0] = o->w0C;
    {
        unsigned int key = 0xB2C32519u;
        Tab *t = D_0024FC50;
        for (i = 0; i < t->count; i++) {
            if (t->ents[i].id == key) {
                r = &t->ents[i];
                goto first;
            }
        }
    }
    r = 0;
first:
    D_0025255C[0] = r;
    {
        unsigned int key = 0xCBD958AFu;
        Tab *t = D_0024FC50;
        for (i = 0; i < t->count; i++) {
            if (t->ents[i].id == key) {
                r = &t->ents[i];
                goto second;
            }
        }
    }
    r = 0;
second:
    D_00252560 = r;
}
