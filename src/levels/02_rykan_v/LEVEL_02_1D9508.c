/* LEVEL_02:0x1D9508 -- copies the 0x30 and 0x38 floats of the global point into slot 0 and of each linked slot's point into slots 1 to 6. */
typedef struct { char pad_00[0x30]; float x; char pad_34[4]; float z; } Pt;
typedef struct { Pt *pt; float x; float z; unsigned char moved; char pad_0D[3]; } Slot;
typedef struct { char pad_00[0x54]; Slot *slots; } Obj;

extern Pt D_0024C650;

void func_1D9508(Obj *o)
{
    Slot *s = o->slots;
    Slot *q;
    unsigned char i;

    s[0].x = D_0024C650.x;
    s[0].z = D_0024C650.z;
    i = 1;
    do {
        q = s + i;
        if (q->pt != 0) {
            q->moved = 0;
            q->x = q->pt->x;
            q->z = q->pt->z;
        }
        i++;
    } while (i < 7);
}
