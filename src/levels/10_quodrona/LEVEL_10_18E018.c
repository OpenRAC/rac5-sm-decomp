/* LEVEL_10:0x18E018 -- fills the result of every six-entry table slot that has a key. */
typedef struct {
    int f00;
    unsigned int key;
    int result;
} Ent;

extern Ent D_00211490[];
extern int func_127EC8(unsigned int value);

void func_18E018(void)
{
    Ent *p = D_00211490;
    Ent *end = p + 6;

    do {
        if (p->key != 0) {
            p->result = func_127EC8(p->key);
        }
        p++;
    } while (p < end);
}
