/* LEVEL_02:0x15DBE0 -- resets the shared state, switches the object to mode 2
   when the check passes, then updates it. */
extern void func_041038(void *value);
extern int func_0833A0(void *, int);
extern void func_15D640(void *, int);
extern void func_15F1A8(void *);

void func_15DBE0(void *obj)
{
    func_041038(0);
    if (func_0833A0(obj, 0))
        func_15D640(obj, 2);
    func_15F1A8(obj);
}
