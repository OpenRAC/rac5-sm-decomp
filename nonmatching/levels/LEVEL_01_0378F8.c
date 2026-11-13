/* USA LEVEL_01.REL:0x0378F8, 160-byte candidate.
 * Measured pinned/gnu-ee-trial: 160 linked bytes; first differing word +0x18.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
struct Resource { unsigned char pad[36]; unsigned int key; unsigned char tail[28]; };
struct ResourceList { unsigned char pad[52]; struct Resource *data; unsigned int count; };
extern struct ResourceList *D_00206D90;
extern unsigned char D_001F45E9;
extern void func_19DBF0(void *), func_051800(void *), func_057CD8(void *);
static __inline__ struct Resource *find_resource(unsigned int key, struct ResourceList *list)
{
    unsigned int count = list->count;
    unsigned int i;
    if (count) {
        struct Resource *p = list->data;
        i = 0;
        do {
            if (p->key == key) return p;
            ++i;
            ++p;
        } while (i < count);
    }
    return 0;
}
void func_0378F8(void *context)
{
    unsigned char *flag = &D_001F45E9;
    *flag = find_resource(0x36919224u, D_00206D90) != 0;
    if (D_001F45E9) func_19DBF0(context);
    func_051800(context);
    func_057CD8(context);
}
