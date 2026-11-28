/* LEVEL_24:0x18F090 -- placement copy of LEVEL_01_1B3468.c: stores a field of the object, then publishes the entries found by two keyed table searches into two globals. */
typedef struct { char pad00[0x24]; unsigned int id; char pad28[0x1C]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
typedef struct { char pad00[0x0C]; int w0C; } Obj;
extern Tab *D_001D7A10;
extern int D_001D9C50[1];
extern Ent *D_001D9C54[1];
extern Ent *D_001D9C58;

void func_18F090(Obj *o)
{
    Ent *r;
    unsigned int i;

    D_001D9C50[0] = o->w0C;
    {
        unsigned int key = 0xB2C32519u;
        Tab *t = D_001D7A10;
        for (i = 0; i < t->count; i++) {
            if (t->ents[i].id == key) {
                r = &t->ents[i];
                goto first;
            }
        }
    }
    r = 0;
first:
    D_001D9C54[0] = r;
    {
        unsigned int key = 0xCBD958AFu;
        Tab *t = D_001D7A10;
        for (i = 0; i < t->count; i++) {
            if (t->ents[i].id == key) {
                r = &t->ents[i];
                goto second;
            }
        }
    }
    r = 0;
second:
    D_001D9C58 = r;
}
