/* LEVEL_08:0x0F6E50 -- asks the helper to refresh the object, then keeps the
   pointer to the other object and the inverse of its rate. */
struct Self {
    char pad000[0x14];
    void *link;
    float rate;
};

struct Other {
    float rate;
};

extern void func_009F4F0(void *a, void *b, int c);

void func_0F6E50(struct Self *self, void *arg, struct Other *other)
{
    func_009F4F0(self, arg, 1);
    self->link = other;
    self->rate = 1.0f / other->rate;
}
