/* LEVEL_08:0x16A248 -- walks a table of 128-byte entries; for each entry with its low flag bit set, not of type four, and whose linked record has a non-zero word, sets bit three of a half-word, or clears it when the argument is non-zero. */

struct Inner {
    unsigned char pad0[0xC];
    unsigned short h0C;
    unsigned char pad1[0x14 - 0x0E];
    unsigned int f14;
};

struct Entry {
    unsigned char pad0[0x45];
    unsigned char b45;
    unsigned char pad1[0x58 - 0x46];
    unsigned char *p58;
    unsigned char pad2[0x64 - 0x5C];
    unsigned int f64;
    unsigned char pad3[0x80 - 0x68];
};

struct Table {
    unsigned char pad0[0xC];
    struct Entry *fC;
    unsigned char pad1[0x30 - 0x10];
    unsigned int f30;
};

extern struct Table *D_00250614;

void func_16A248(int a0)
{
    struct Entry *e;
    struct Entry *end;
    struct Inner *in;
    int v;

    e = D_00250614->fC;
    end = e + D_00250614->f30;
    while (e != end) {
        if ((e->f64 & 1) != 0) {
            if (e->b45 != 4) {
                in = (struct Inner *)(e->p58 + 4);
                if (in->f14 != 0) {
                    v = in->h0C;
                    in->h0C = (a0 != 0 ? (v & -9) : (v | 8));
                }
            }
        }
        e++;
    }
}
