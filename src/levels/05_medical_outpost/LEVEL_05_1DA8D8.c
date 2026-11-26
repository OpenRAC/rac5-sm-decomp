/* LEVEL_05:0x1DA8D8 -- placement copy of LEVEL_01_1EB4E0.c: allocates a zeroed exception context whose handler chain points at its own top element. */
struct eh_context
{
  void *handler_label;
  void ***dynamic_handler_chain;
  void *info;
  void *table_index;
};

extern void *malloc(unsigned int n);
extern void *memset(void *s, int c, unsigned int n);
extern void func_1DA878(void);

struct eh_context *func_1DA8D8(void)
{
  struct eh_context *ehc;
  struct eh_full_context {
    struct eh_context c;
    void *top_elt[2];
  } *ehfc = (struct eh_full_context *) malloc (sizeof *ehfc);

  if (! ehfc)
    func_1DA878 ();

  memset (ehfc, 0, sizeof *ehfc);

  ehc = (struct eh_context *) ehfc;

  ehc->dynamic_handler_chain = (void ***) &ehfc->top_elt;

  return ehc;
}
