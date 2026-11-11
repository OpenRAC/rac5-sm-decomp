struct A { float f; int x, y; };
struct B { int w; float f; int y; };
struct C { int w, x; float y; };
struct M { struct A a; struct B b; struct C c; };

void func_123C38(struct M *m)
{
    struct B *pb = &m->b;
    struct C *pc = &m->c;

    m->a.f = 1.0f;
    m->a.x = 0;
    m->a.y = 0;
    pb->w = 0;
    pb->f = 1.0f;
    pb->y = 0;
    pc->w = 0;
    pc->x = 0;
    pc->y = 1.0f;
}
