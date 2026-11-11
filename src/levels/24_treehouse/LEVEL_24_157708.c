/* LEVEL_24:0x157708 -- placement copy of LEVEL_01_171388.c: selects a state byte from an entry value, or runs a helper and uses state 2. */
struct E { char pad[0x58]; unsigned int value; };
struct R { char pad[0x45]; unsigned char state; char pad46[0x12]; struct E *entry; };
extern int func_1576B0(void);
extern void func_1564D8(struct R *);
void func_157708(struct R *r)
{
    struct E *e = r->entry;
    int ok = func_1576B0();
    if (ok) {
        if (e->value == 1) { r->state = 8; return; }
        if (e->value >= 2) { r->state = 6; return; }
    }
    func_1564D8(r);
    r->state = 2;
}
