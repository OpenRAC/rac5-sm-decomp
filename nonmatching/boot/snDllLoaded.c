/* snDllLoaded -- RAC5 boot body, w12/q25.
 *
 * Provenance: no authentic source in the corpora (SN Systems module
 * registry); reconstructed from the retail disassembly 0x01E9BB58..0x01E9BC9C.
 * Measured: debug flag 0x01EFAEA0; module fields +0x14 (id), +0x18 (callback),
 * +0x20 (status value), +0x24 (status present); status record at 0x01EF7E98
 * with the printed words at +8/+0xC/+0x10; format
 * "###DLL:Loaded %08x %08x %08x %08x %s\n" at 0x01F20C38.
 * Retail: 0x01E9BB58, interval 328 bytes. Toolchain: SN ProDG 3.01
 * ee-gcc2953 (GCC 2.95.3) -O2 -G0, Ps2EeAs.exe, SN ld.exe.
 */
struct snDllModule {
  char pad0[0x14];
  int f14;
  void (*f18) (void);
  int f1c;
  int f20;
  int f24;
};

struct snDllStat {
  int pad0;
  int pad4;
  int a;
  int b;
  int c;
};

extern int snDebugFlag;
struct snDllEntry { int pad0; int pad4; int a; };
extern struct snDllEntry snDllTable[];
extern const char snDllFormat[];
extern int func_1E9AD00 (struct snDllModule *);
extern int func_1E9B5A8 (struct snDllModule *, struct snDllModule *);
extern int func_1E9B998 (int, struct snDllModule *);
extern void snAllBreaksOut (void);
extern void snAllBreaksIn (void);
extern void snNotifyDebugger (void);
extern int printf (const char *, ...);

int
snDllLoaded (struct snDllModule *m, int *reason)
{
  int h, r, ok;

  if (reason)
    *reason = 0;
  h = func_1E9AD00 (m);
  if (h)
    return h;
  snAllBreaksOut ();
  h = func_1E9B5A8 (m, m);
  if (h)
    {
      snAllBreaksIn ();
      return h;
    }
  if (reason && m->f24)
    *reason = m->f20;
  r = func_1E9B998 (m->f14, m);
  ok = (r >= 0) ? 0 : 6;
  snAllBreaksIn ();
  if (ok)
    return ok;
  if (snDebugFlag == 0)
    snNotifyDebugger ();
  else if (snDebugFlag == 1)
    printf (snDllFormat, r, snDllTable[r].a,
            *(int *) ((char *) &snDllTable[r] + 12),
            *(int *) ((char *) &snDllTable[r] + 16),
            snDllTable[r].a);
  if (m->f18)
    m->f18 ();
  return 0;
}
