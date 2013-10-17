// offlineasm input hash: 2581cae36f3055d44efd6d46b80754c65b35cf9f bd19e822f64eac67bf923a9d3c03193bb0271f04 ba7cf1e15e68c4ab21892582e4864d025f76ac6a
#if OFFLINE_ASM_JIT_ENABLED && OFFLINE_ASM_JSVALUE64 && !OFFLINE_ASM_SH4 && !OFFLINE_ASM_EXECUTION_TRACING && !OFFLINE_ASM_ALWAYS_ALLOCATE_SLOW && !OFFLINE_ASM_ARMv7_TRADITIONAL && !OFFLINE_ASM_ARM && !OFFLINE_ASM_ARMv7s && OFFLINE_ASM_VALUE_PROFILER && !OFFLINE_ASM_C_LOOP && !OFFLINE_ASM_BIG_ENDIAN && !OFFLINE_ASM_ASSERT_ENABLED && OFFLINE_ASM_X86_64 && !OFFLINE_ASM_MIPS && !OFFLINE_ASM_ARMv7 && !OFFLINE_ASM_X86
OFFLINE_ASM_BEGIN

OFFLINE_ASM_GLUE_LABEL(llint_begin)
    "\tmovl %eax, 3148725999\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:180
    "\txorq %rax, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:181
    "\tcall *%rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:182

OFFLINE_ASM_GLUE_LABEL(llint_program_prologue)
    "\tpop %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:201
    "\tmovq %rcx, -16(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:308
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:291
    "\taddl $5, 560(%rdx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_entry_osr) "\n"
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:316
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318
    "\tpush %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:214
    "\tjmp *%rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_prologue__recover)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:291

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_prologue__continue)
    "\tmovq 104(%rdx), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:329
    "\txorq %rsi, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:330
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLUE_LABEL(llint_eval_prologue)
    "\tpop %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:201
    "\tmovq %rcx, -16(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:308
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:291
    "\taddl $5, 560(%rdx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_0_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_entry_osr) "\n"
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:316
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_0_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318
    "\tpush %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:214
    "\tjmp *%rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_0_prologue__recover)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:291

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_0_prologue__continue)
    "\tmovq 104(%rdx), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:329
    "\txorq %rsi, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:330
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLUE_LABEL(llint_function_for_call_prologue)
    "\tpop %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:201
    "\tmovq %rcx, -16(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:308
    "\tmovq -32(%r13), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:279
    "\tmovq 24(%rdx), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:280
    "\tmovq 120(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:281
    "\taddl $5, 560(%rdx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_1_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_call) "\n"
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:316
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_1_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318
    "\tpush %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:214
    "\tjmp *%rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_1_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:279
    "\tmovq 24(%rdx), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:280
    "\tmovq 120(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:281

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_1_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:295
    "\tmovq 104(%rdx), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:329
    "\txorq %rsi, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:330

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionForCallBegin)
    "\tmovl 80(%rdx), %eax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:347
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:348
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:350
    "\ttestq %rax, %rax\n"
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_functionInitialization__argumentProfileDone) "\n"
    "\tmovq 328(%rdx), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:351
    "\timulq $40, %rax, %rcx\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:352
    "\tnegq %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:353
    "\tsalq $3, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:354
    "\taddq %rcx, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:355

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionInitialization__argumentProfileLoop)
    "\tmovq -48(%r13, %rax, 1), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:358
    "\tsubq $40, %rbx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:359
    "\tmovq %rcx, 24(%rbx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:360
    "\taddq $8, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:368
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_functionInitialization__argumentProfileLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionInitialization__argumentProfileDone)
    "\tmovl 56(%rdx), %eax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:373
    "\tmovq 96(%rdx), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:374
    "\tmovq 43360(%rcx), %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:375
    "\tsall $3, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:376
    "\taddq %r13, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:377
    "\tcmpq %rax, 24(%rcx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:378
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_functionInitialization__stackHeightOK) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_stack_check) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionInitialization__stackHeightOK)
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLUE_LABEL(llint_function_for_construct_prologue)
    "\tpop %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:201
    "\tmovq %rcx, -16(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:308
    "\tmovq -32(%r13), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:285
    "\tmovq 24(%rdx), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:286
    "\tmovq 128(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:287
    "\taddl $5, 560(%rdx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_2_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_construct) "\n"
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:316
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_2_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318
    "\tpush %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:214
    "\tjmp *%rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:285
    "\tmovq 24(%rdx), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:286
    "\tmovq 128(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:287

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:295
    "\tmovq 104(%rdx), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:329
    "\txorq %rsi, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:330

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionForConstructBegin)
    "\tmovl 80(%rdx), %eax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:347
    "\taddq $-1, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:348
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:350
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_2_functionInitialization__argumentProfileDone) "\n"
    "\tmovq 328(%rdx), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:351
    "\timulq $40, %rax, %rcx\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:352
    "\tnegq %rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:353
    "\tsalq $3, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:354
    "\taddq %rcx, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:355

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_functionInitialization__argumentProfileLoop)
    "\tmovq -56(%r13, %rax, 1), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:358
    "\tsubq $40, %rbx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:359
    "\tmovq %rcx, 64(%rbx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:360
    "\taddq $8, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:368
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_2_functionInitialization__argumentProfileLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_functionInitialization__argumentProfileDone)
    "\tmovl 56(%rdx), %eax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:373
    "\tmovq 96(%rdx), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:374
    "\tmovq 43360(%rcx), %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:375
    "\tsall $3, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:376
    "\taddq %r13, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:377
    "\tcmpq %rax, 24(%rcx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:378
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_2_functionInitialization__stackHeightOK) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_stack_check) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_functionInitialization__stackHeightOK)
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLUE_LABEL(llint_function_for_call_arity_check)
    "\tpop %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:201
    "\tmovq %rcx, -16(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:308
    "\tmovq -32(%r13), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:279
    "\tmovq 24(%rdx), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:280
    "\tmovq 120(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:281
    "\taddl $5, 560(%rdx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_3_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_call_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:316
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_3_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318
    "\tpush %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:214
    "\tjmp *%rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_3_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:279
    "\tmovq 24(%rdx), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:280
    "\tmovq 120(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:281

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_3_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:295
    "\tmovq 104(%rdx), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:329
    "\txorq %rsi, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:330
    "\tmovl -48(%r13), %eax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:191
    "\tcmpl 80(%rdx), %eax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:192
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_functionForCallBegin) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_call_arityCheck) "\n"
    "\ttestl %eax, %eax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:195
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_functionArityCheck__isArityFixupNeeded) "\n"
    "\tmovq 112(%rsp), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:196
    "\tmovq 43416(%rdx), %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:197
    "\tjmp *43424(%rdx)\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:198

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionArityCheck__isArityFixupNeeded)
    "\ttestl %edx, %edx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:200
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_functionArityCheck__continue) "\n"
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:202
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:203
    "\tmovq %r13, %rbx\n"
    "\tsubq $8, %rbx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:204
    "\tmovl -48(%r13), %ecx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:205
    "\taddl $6, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:206

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionArityCheck__copyLoop)
    "\tmovq 0(%rbx), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:208
    "\tmovq %rax, 0(%rbx, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:209
    "\tsubq $8, %rbx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:210
    "\tsubl $1, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:211
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_functionArityCheck__copyLoop) "\n"
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:213
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:214
    "\tmovq %rdx, %rcx\n"
    "\tmovq $10, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:215

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionArityCheck__fillLoop)
    "\tmovq %rax, 0(%rbx, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:217
    "\tsubq $8, %rbx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:218
    "\tsubl $1, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:219
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_functionArityCheck__fillLoop) "\n"
    "\tsalq $3, %rdx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:221
    "\taddq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:222

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionArityCheck__continue)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:226
    "\tmovq 104(%rdx), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:227
    "\txorq %rsi, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:228
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_functionForCallBegin) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:229

OFFLINE_ASM_GLUE_LABEL(llint_function_for_construct_arity_check)
    "\tpop %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:201
    "\tmovq %rcx, -16(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:308
    "\tmovq -32(%r13), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:285
    "\tmovq 24(%rdx), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:286
    "\tmovq 128(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:287
    "\taddl $5, 560(%rdx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:314
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_4_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_construct_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:316
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:317
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_4_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:318
    "\tpush %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:214
    "\tjmp *%rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:285
    "\tmovq 24(%rdx), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:286
    "\tmovq 128(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:287

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:295
    "\tmovq 104(%rdx), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:329
    "\txorq %rsi, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:330
    "\tmovl -48(%r13), %eax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:191
    "\tcmpl 80(%rdx), %eax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:192
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_functionForConstructBegin) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_construct_arityCheck) "\n"
    "\ttestl %eax, %eax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:195
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_4_functionArityCheck__isArityFixupNeeded) "\n"
    "\tmovq 112(%rsp), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:196
    "\tmovq 43416(%rdx), %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:197
    "\tjmp *43424(%rdx)\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:198

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_functionArityCheck__isArityFixupNeeded)
    "\ttestl %edx, %edx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:200
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_4_functionArityCheck__continue) "\n"
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:202
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:203
    "\tmovq %r13, %rbx\n"
    "\tsubq $8, %rbx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:204
    "\tmovl -48(%r13), %ecx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:205
    "\taddl $6, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:206

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_functionArityCheck__copyLoop)
    "\tmovq 0(%rbx), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:208
    "\tmovq %rax, 0(%rbx, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:209
    "\tsubq $8, %rbx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:210
    "\tsubl $1, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:211
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_4_functionArityCheck__copyLoop) "\n"
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:213
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:214
    "\tmovq %rdx, %rcx\n"
    "\tmovq $10, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:215

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_functionArityCheck__fillLoop)
    "\tmovq %rax, 0(%rbx, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:217
    "\tsubq $8, %rbx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:218
    "\tsubl $1, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:219
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_4_functionArityCheck__fillLoop) "\n"
    "\tsalq $3, %rdx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:221
    "\taddq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:222

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_functionArityCheck__continue)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:226
    "\tmovq 104(%rdx), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:227
    "\txorq %rsi, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:228
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_functionForConstructBegin) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:229

OFFLINE_ASM_OPCODE_LABEL(op_enter)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:237
    "\tmovl 60(%rcx), %ecx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:238
    "\ttestl %ecx, %ecx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:239
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opEnterDone) "\n"
    "\tmovq $10, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:240

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opEnterLoop)
    "\tsubl $1, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:242
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:243
    "\ttestl %ecx, %ecx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:244
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opEnterLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opEnterDone)
    "\taddq $1, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_create_activation)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:252
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opCreateActivationDone) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_create_activation) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCreateActivationDone)
    "\taddq $2, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_init_lazy_reg)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq $0, 0(%r13, %rax, 8)\n"                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:261
    "\taddq $2, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_create_arguments)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:268
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opCreateArgumentsDone) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_create_arguments) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCreateArgumentsDone)
    "\taddq $2, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_create_this)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:277
    "\tmovq 40(%rax), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:278
    "\tmovq 48(%rax), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:279
    "\ttestq %rdx, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:280
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opCreateThisSlow) "\n"
    "\tmovq 0(%rdx), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:394
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:395
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opCreateThisSlow) "\n"
    "\tmovq 0(%rax), %rbx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:398
    "\tmovq %rbx, 0(%rdx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:399
    "\tmovq %rcx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:402
    "\tmovq $0, 8(%rax)\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:403
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:283
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCreateThisSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_create_this) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_get_callee)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq -32(%r13), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:294
    "\tmovq 16(%r10, %rsi, 8), %rcx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rdx, 24(%rcx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\tmovq %rdx, 0(%r13, %rax, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:296
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_to_this)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:303
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:304
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opToThisSlow) "\n"
    "\tmovq 0(%rax), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:305
    "\tcmpb $18, 92(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:306
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opToThisSlow) "\n"
    "\tmovq 16(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rdx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToThisSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_to_this) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_new_object)
    "\tmovq 24(%r10, %rsi, 8), %rax\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq 0(%rax), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:318
    "\tmovq 8(%rax), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:319
    "\tmovq 0(%rdx), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:394
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:395
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNewObjectSlow) "\n"
    "\tmovq 0(%rax), %rbx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:398
    "\tmovq %rbx, 0(%rdx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:399
    "\tmovq %rcx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:402
    "\tmovq $0, 8(%rax)\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:403
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:322
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNewObjectSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_object) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_mov)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rcx), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariable__done)
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:335
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_not)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_4_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_4_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rcx), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_loadConstantOrVariable__done)
    "\txorq $6, %rcx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:344
    "\ttestq $-2, %rcx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:345
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opNotSlow) "\n"
    "\txorq $7, %rcx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:346
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:347
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNotSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_not) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_eq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:167
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__slow) "\n"
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:167
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__slow) "\n"
    "\tcmpl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:374
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\torq $6, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:363
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:364
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_eq) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_neq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:167
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_8_equalityComparison__slow) "\n"
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:167
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_8_equalityComparison__slow) "\n"
    "\tcmpl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:380
    "\tsetne %al\n"
    "\tmovzbl %al, %eax\n"
    "\torq $6, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:363
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:364
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalityComparison__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_neq) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_eq_null)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:386
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:387
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__immediate) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:388
    "\ttestb $1, 93(%rcx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:389
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__masqueradesAsUndefined) "\n"
    "\txorq %rax, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:390
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:391

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNullComparison__masqueradesAsUndefined)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:393
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:394
    "\tcmpq %rax, 8(%rcx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:395
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:396

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNullComparison__immediate)
    "\tandq $-9, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:398
    "\tcmpq $2, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:399
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNullComparison__done)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\torq $6, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:407
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:408
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_neq_null)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:386
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:387
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__immediate) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:388
    "\ttestb $1, 93(%rcx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:389
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__masqueradesAsUndefined) "\n"
    "\txorq %rax, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:390
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:391

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalNullComparison__masqueradesAsUndefined)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:393
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:394
    "\tcmpq %rax, 8(%rcx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:395
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:396

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalNullComparison__immediate)
    "\tandq $-9, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:398
    "\tcmpq $2, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:399
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalNullComparison__done)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\txorq $7, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:416
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:417
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_stricteq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__9_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__9_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__9_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__9_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__10_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__10_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__10_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__10_loadConstantOrVariable__done)
    "\tmovq %rax, %rcx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:427
    "\torq %rdx, %rcx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:428
    "\ttestq %r15, %rcx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:429
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_strictEq__slow) "\n"
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:430
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_strictEq__leftOK) "\n"
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:431
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__leftOK)
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:433
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_strictEq__rightOK) "\n"
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:434
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__rightOK)
    "\tcmpq %rdx, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:449
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\torq $6, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:438
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:439
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_stricteq) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_nstricteq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__11_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__11_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__11_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__11_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__12_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__12_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__12_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__12_loadConstantOrVariable__done)
    "\tmovq %rax, %rcx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:427
    "\torq %rdx, %rcx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:428
    "\ttestq %r15, %rcx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:429
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__slow) "\n"
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:430
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__leftOK) "\n"
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:431
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_strictEq__leftOK)
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:433
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__rightOK) "\n"
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:434
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_strictEq__rightOK)
    "\tcmpq %rdx, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:455
    "\tsetne %al\n"
    "\tmovzbl %al, %eax\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\torq $6, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:438
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:439
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_strictEq__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_nstricteq) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_inc)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:462
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:463
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_preOp__slow) "\n"
    "\taddl $1, %edx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:476
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_preOp__slow) "\n"
    "\torq %r14, %rdx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:465
    "\tmovq %rdx, 0(%r13, %rax, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:466
    "\taddq $2, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_preOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_inc) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $2, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_dec)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:462
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:463
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_12_preOp__slow) "\n"
    "\tsubl $1, %edx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:482
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_12_preOp__slow) "\n"
    "\torq %r14, %rdx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:465
    "\tmovq %rdx, 0(%r13, %rax, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:466
    "\taddq $2, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_preOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_dec) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $2, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_to_number)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_13_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_13_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_13_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rcx), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_13_loadConstantOrVariable__done)
    "\tcmpq %r14, %rcx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:491
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opToNumberIsImmediate) "\n"
    "\ttestq %r14, %rcx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:492
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opToNumberSlow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToNumberIsImmediate)
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:494
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToNumberSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_to_number) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_negate)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_14_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_14_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_14_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rcx), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_14_loadConstantOrVariable__done)
    "\tcmpq %r14, %rcx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:507
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opNegateNotInt) "\n"
    "\ttestl $2147483647, %ecx\n"                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:508
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNegateSlow) "\n"
    "\tnegl %ecx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:509
    "\torq %r14, %rcx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:510
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:511
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNegateNotInt)
    "\ttestq %r14, %rcx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:514
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNegateSlow) "\n"
    "\tmovq $9223372036854775808, %r11\n"                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:515
    "\txorq %r11, %rcx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:515
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:516
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNegateSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_negate) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_add)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:529
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:530
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\taddl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:586
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\torq %r14, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:577
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:578
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:537
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:538
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:539
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:540
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:542

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:544

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\taddq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:547
    "\tmovq %rax, %xmm0\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:548
    "\taddsd %xmm1, %xmm0\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:587
    "\tmovq %xmm0, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:550
    "\tsubq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:551
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:552
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:558
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:559
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:560
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:561
    "\taddsd %xmm1, %xmm0\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:587
    "\tmovq %xmm0, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:563
    "\tsubq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:564
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:565
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_add) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_mul)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:529
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:530
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:596
    "\timull %edx, %ebx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:597
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\ttestl %ebx, %ebx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:598
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__integerOperationAndStore__done) "\n"
    "\tcmpl $0, %edx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:599
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\tcmpl $0, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:600
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__integerOperationAndStore__done)
    "\torq %r14, %rbx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:602
    "\tmovq %rbx, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:603
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:537
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:538
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:539
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:540
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:542

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:544

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\taddq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:547
    "\tmovq %rax, %xmm0\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:548
    "\tmulsd %xmm1, %xmm0\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:605
    "\tmovq %xmm0, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:550
    "\tsubq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:551
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:552
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:558
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:559
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:560
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:561
    "\tmulsd %xmm1, %xmm0\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:605
    "\tmovq %xmm0, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:563
    "\tsubq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:564
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:565
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_mul) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_sub)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:529
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:530
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tsubl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:612
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\torq %r14, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:577
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:578
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:537
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:538
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:539
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:540
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:542

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:544

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\taddq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:547
    "\tmovq %rax, %xmm0\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:548
    "\tsubsd %xmm1, %xmm0\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:613
    "\tmovq %xmm0, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:550
    "\tsubq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:551
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:552
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:558
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:559
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:560
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:561
    "\tsubsd %xmm1, %xmm0\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:613
    "\tmovq %xmm0, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:563
    "\tsubq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:564
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:565
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_sub) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_div)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:529
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:530
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\ttestl %edx, %edx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:622
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\tcmpl $-1, %edx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:623
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__integerOperationAndStore__notNeg2TwoThe31DivByNeg1) "\n"
    "\tcmpl $-2147483648, %eax\n"                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:624
    "\tje " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__integerOperationAndStore__notNeg2TwoThe31DivByNeg1)
    "\ttestl %eax, %eax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:626
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__integerOperationAndStore__intOK) "\n"
    "\tcmpl $0, %edx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:627
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__integerOperationAndStore__intOK)
    "\tmovq %rdx, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:629
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:630
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:631
    "\tcdq\n"
    "\tidivl %ebx\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:632
    "\ttestl %edx, %edx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:633
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\torq %r14, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:634
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:635
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:537
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:538
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:539
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:540
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:542

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:544

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\taddq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:547
    "\tmovq %rax, %xmm0\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:548
    "\tdivsd %xmm1, %xmm0\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:637
    "\tmovq %xmm0, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:550
    "\tsubq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:551
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:552
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:558
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:559
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:560
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:561
    "\tdivsd %xmm1, %xmm0\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:637
    "\tmovq %xmm0, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:563
    "\tsubq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:564
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:565
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_div) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_lshift)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__23_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__23_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__23_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__23_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__24_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__24_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__24_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__24_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:647
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:648
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_bitOp__slow) "\n"
    "\txchgq %rdx, %rcx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:662
    "\tsall %cl, %eax\n"
    "\txchgq %rdx, %rcx\n"
    "\torq %r14, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:650
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:651
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_lshift) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_rshift)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__25_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__25_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__25_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__25_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__26_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__26_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__26_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__26_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:647
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_26_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:648
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_26_bitOp__slow) "\n"
    "\txchgq %rdx, %rcx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:670
    "\tsarl %cl, %eax\n"
    "\txchgq %rdx, %rcx\n"
    "\torq %r14, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:650
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:651
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_26_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_rshift) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_urshift)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__27_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__27_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__27_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__27_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__28_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__28_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__28_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__28_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:647
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_28_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:648
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_28_bitOp__slow) "\n"
    "\txchgq %rdx, %rcx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:679
    "\tshrl %cl, %eax\n"
    "\txchgq %rdx, %rcx\n"
    "\tcmpl $0, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:680
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_28_bitOp__slow) "\n"
    "\torq %r14, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:650
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:651
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_28_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_urshift) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_bitand)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__29_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__29_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__29_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__29_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__30_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__30_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__30_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__30_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:647
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_30_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:648
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_30_bitOp__slow) "\n"
    "\tandl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:689
    "\torq %r14, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:650
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:651
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_30_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_bitand) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_bitxor)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__31_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__31_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__31_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__31_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__32_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__32_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__32_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__32_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:647
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_32_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:648
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_32_bitOp__slow) "\n"
    "\txorl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:697
    "\torq %r14, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:650
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:651
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_32_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_bitxor) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_bitor)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__33_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__33_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__33_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__33_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__34_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__34_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__34_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__34_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:647
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_34_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:648
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_34_bitOp__slow) "\n"
    "\torl %edx, %eax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:705
    "\torq %r14, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:650
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:651
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_34_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_bitor) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_check_has_instance)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opCheckHasInstanceSlow) "\n"
    "\tmovq 0(%rax), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:714
    "\ttestb $8, 93(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:715
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opCheckHasInstanceSlow) "\n"
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCheckHasInstanceSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_check_has_instance) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_instanceof)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__36_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__36_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__36_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__36_loadConstantOrVariable__done)
    "\ttestq %r15, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opInstanceofSlow) "\n"
    "\tmovq 0(%rdx), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:729
    "\tcmpb $17, 92(%rcx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:730
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opInstanceofSlow) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rcx), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__done)
    "\ttestq %r15, %rcx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opInstanceofSlow) "\n"
    "\tmovq $1, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:735

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInstanceofLoop)
    "\tmovq 0(%rcx), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:737
    "\tmovq 16(%rcx), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:738
    "\tcmpq %rdx, %rcx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:739
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opInstanceofDone) "\n"
    "\ttestq %r15, %rcx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:740
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opInstanceofLoop) "\n"
    "\txorq %rax, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:742

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInstanceofDone)
    "\torq $6, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:744
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:745
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInstanceofSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_instanceof) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_is_undefined)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_38_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_38_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_38_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_38_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:758
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opIsUndefinedCell) "\n"
    "\tcmpq $10, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:759
    "\tsete %bl\n"
    "\tmovzbl %bl, %ebx\n"
    "\torq $6, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:760
    "\tmovq %rbx, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:761
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opIsUndefinedCell)
    "\tmovq 0(%rax), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:764
    "\ttestb $1, 93(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:765
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_masqueradesAsUndefined) "\n"
    "\tmovq $6, %rdx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:766
    "\tmovq %rdx, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:767
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_masqueradesAsUndefined)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:770
    "\tmovq 40(%rdx), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:771
    "\tcmpq %rdx, 8(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:772
    "\tsete %bl\n"
    "\tmovzbl %bl, %ebx\n"
    "\torq $6, %rbx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:773
    "\tmovq %rbx, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:774
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_is_boolean)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_39_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_39_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_39_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_39_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:783
    "\ttestq $-2, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:784
    "\tsetz %al\n"
    "\tmovzbl %al, %eax\n"
    "\torq $6, %rax\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:785
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:786
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_is_number)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_40_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_40_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_40_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_40_loadConstantOrVariable__done)
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:795
    "\tsetnz %dl\n"
    "\tmovzbl %dl, %edx\n"
    "\torq $6, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:796
    "\tmovq %rdx, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:797
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_is_string)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_41_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_41_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_41_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_41_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:806
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opIsStringNotCell) "\n"
    "\tmovq 0(%rax), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:807
    "\tcmpb $5, 92(%rax)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:808
    "\tsete %dl\n"
    "\tmovzbl %dl, %edx\n"
    "\torq $6, %rdx\n"                                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:809
    "\tmovq %rdx, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:810
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opIsStringNotCell)
    "\tmovq $6, 0(%r13, %rcx, 8)\n"                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:813
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_init_global_const)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 8(%r10, %rsi, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_42_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_42_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_42_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rcx), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_42_loadConstantOrVariable__done)
    "\tmovq %rcx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:848
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__43_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__43_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__43_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rbx), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__43_loadConstantOrVariable__done)
    "\ttestq %r15, %rbx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_getById__opGetByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq %rdx, 0(%rbx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:867
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_getById__opGetByIdSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%rbx, %rcx, 1), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:869
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:870
    "\tmovq 64(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rdx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\taddq $9, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__opGetByIdSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $9, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_out_of_line)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__44_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__44_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__44_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rbx), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__44_loadConstantOrVariable__done)
    "\ttestq %r15, %rbx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_44_getById__opGetByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 8(%rbx), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:547
    "\tcmpq %rdx, 0(%rbx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:867
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_44_getById__opGetByIdSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%rax, %rcx, 1), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:869
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:870
    "\tmovq 64(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rbx, 24(%rdx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\taddq $9, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_44_getById__opGetByIdSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $9, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_get_array_length)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__45_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__45_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__45_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rbx), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__45_loadConstantOrVariable__done)
    "\ttestq %r15, %rbx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetArrayLengthSlow) "\n"
    "\tmovq 0(%rbx), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:893
    "\tmovq %rcx, 8(%rdx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:252
    "\tmovzbl 95(%rcx), %ecx\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:254
    "\ttestl $1, %ecx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:895
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opGetArrayLengthSlow) "\n"
    "\ttestl $30, %ecx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:896
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opGetArrayLengthSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 8(%rbx), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:898
    "\tmovl -8(%rax), %eax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:899
    "\tcmpl $0, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:900
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_opGetArrayLengthSlow) "\n"
    "\torq %r14, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:901
    "\tmovq 64(%r10, %rsi, 8), %rcx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rcx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:903
    "\taddq $9, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetArrayLengthSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $9, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_get_arguments_length)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:915
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentsLengthSlow) "\n"
    "\tmovl -48(%r13), %ecx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:916
    "\tsubl $1, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:917
    "\torq %r14, %rcx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:918
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:919
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetArgumentsLengthSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_arguments_length) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__46_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__46_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__46_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__46_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:937
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__47_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__47_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__47_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rbx), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rbx, %rcx, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__47_loadConstantOrVariable__done)
    "\tmovq %rbx, 0(%rax, %rdx, 1)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:941
    "\taddq $9, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByIdSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $9, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_out_of_line)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__48_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__48_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__48_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__48_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 8(%rax), %rbx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:547
    "\tcmpq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:937
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__49_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__49_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__49_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__49_loadConstantOrVariable__done)
    "\tmovq %rax, 0(%rbx, %rdx, 1)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:941
    "\taddq $9, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition_direct)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__50_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__50_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__50_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__50_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:964
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tleaq (%rdx, %rax), %rbx\n"                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:971
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__51_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__51_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__51_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__51_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:974
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:976
    "\taddq $9, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition_direct_out_of_line)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__52_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__52_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__52_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__52_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:964
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 8(%rax), %rbx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:547
    "\taddq %rdx, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:971
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__53_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__53_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__53_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__53_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:974
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:976
    "\taddq $9, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition_normal)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__54_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__54_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__54_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__54_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:964
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovq 56(%r10, %rsi, 8), %rbx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq 8(%rbx), %rbx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:988
    "\tcmpq $2, 16(%rdx)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:990
    "\tje " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__additionalChecks__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__additionalChecks__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:992
    "\tmovq 0(%rdx), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:993
    "\tcmpq 0(%rbx), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:994
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\taddq $8, %rbx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:995
    "\tcmpq $2, 16(%rdx)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:996
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__additionalChecks__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__additionalChecks__done)
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tleaq (%rdx, %rax), %rbx\n"                            // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:971
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__55_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__55_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__55_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__55_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:974
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:976
    "\taddq $9, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition_normal_out_of_line)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__56_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__56_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__56_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__56_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:964
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovq 56(%r10, %rsi, 8), %rbx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq 8(%rbx), %rbx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:988
    "\tcmpq $2, 16(%rdx)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:990
    "\tje " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__56_additionalChecks__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__56_additionalChecks__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:992
    "\tmovq 0(%rdx), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:993
    "\tcmpq 0(%rbx), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:994
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\taddq $8, %rbx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:995
    "\tcmpq $2, 16(%rdx)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:996
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__56_additionalChecks__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__56_additionalChecks__done)
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 8(%rax), %rbx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:547
    "\taddq %rdx, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:971
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__57_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__57_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__57_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__57_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:974
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:976
    "\taddq $9, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_get_by_val)
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__58_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__58_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__58_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__58_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1020
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rcx, 8(%rbx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:252
    "\tmovzbl 95(%rcx), %ecx\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:254
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__59_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__59_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__59_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__59_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:167
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovslq %edx, %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1025
    "\tmovq 8(%rax), %rbx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1026
    "\tandl $30, %ecx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1027
    "\tcmpl $20, %ecx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1028
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opGetByValIsContiguous) "\n"
    "\tcmpl $26, %ecx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1029
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByValNotContiguous) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValIsContiguous)
    "\tcmpl -8(%rbx), %edx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1032
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByValOutOfBounds) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%rbx, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1034
    "\ttestq %rcx, %rcx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1035
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opGetByValOutOfBounds) "\n"
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opGetByValDone) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1036

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValNotContiguous)
    "\tcmpl $22, %ecx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1039
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByValNotDouble) "\n"
    "\tcmpl -8(%rbx), %edx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1040
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByValOutOfBounds) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1041
    "\tmovsd 0(%rbx, %rdx, 8), %xmm0\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1042
    "\tucomisd %xmm0, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1043
    "\tjp " LOCAL_LABEL_STRING(_offlineasm_opGetByValOutOfBounds) "\n"
    "\tmovq %xmm0, %rcx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1044
    "\tsubq %r14, %rcx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1045
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opGetByValDone) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1046

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValNotDouble)
    "\tsubl $28, %ecx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1049
    "\tcmpl $2, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1050
    "\tja " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tcmpl -4(%rbx), %edx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1051
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByValOutOfBounds) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 16(%rbx, %rdx, 8), %rcx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1053
    "\ttestq %rcx, %rcx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1054
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opGetByValOutOfBounds) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValDone)
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1057
    "\tmovq 40(%r10, %rsi, 8), %rax\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rcx, 24(%rax)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\taddq $6, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValOutOfBounds)
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovb $1, 17(%rax)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1064

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $6, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_get_argument_by_val)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1077
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentByValSlow) "\n"
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__60_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__60_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__60_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rcx), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__60_loadConstantOrVariable__done)
    "\tcmpq %r14, %rcx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:167
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentByValSlow) "\n"
    "\taddl $1, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1079
    "\tmovl -48(%r13), %edx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1080
    "\tcmpl %edx, %ecx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1081
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentByValSlow) "\n"
    "\tnegl %ecx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1082
    "\tmovslq %ecx, %rcx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1083
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq -56(%r13, %rcx, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1086
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1087
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rdx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\taddq $6, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetArgumentByValSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_argument_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $6, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_get_by_pname)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_61_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_61_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_61_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_61_loadConstantOrVariable__done)
    "\tmovslq 32(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq 0(%r13, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1102
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 40(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__62_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__62_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__62_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__62_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1107
    "\tmovq 0(%rax), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1108
    "\tcmpq 8(%rdx), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1109
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tmovslq 48(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovl 0(%r13, %rbx, 8), %ebx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1111
    "\tsubl $1, %ebx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1112
    "\tcmpl 24(%rdx), %ebx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1113
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tcmpl 32(%rdx), %ebx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1114
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameInlineProperty) "\n"
    "\taddl $100, %ebx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1115
    "\tsubl 32(%rdx), %ebx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1116

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByPnameInlineProperty)
    "\tcmpl $100, %ebx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:818
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_loadPropertyAtVariableOffset__isInline) "\n"
    "\tmovq 8(%rax), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:819
    "\tnegl %ebx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:820
    "\tmovslq %ebx, %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:821
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadPropertyAtVariableOffset__ready) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:822

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadPropertyAtVariableOffset__isInline)
    "\taddq $-768, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:824

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadPropertyAtVariableOffset__ready)
    "\tmovq 784(%rax, %rbx, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:826
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1120
    "\taddq $7, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByPnameSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_pname) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $7, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_put_by_val)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__63_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__63_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__63_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__63_loadConstantOrVariable__done)
    "\ttestq %r15, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:172
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovq 0(%rdx), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1150
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rcx, 8(%rbx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:252
    "\tmovzbl 95(%rcx), %ecx\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:254
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__64_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__64_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__64_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rbx), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__64_loadConstantOrVariable__done)
    "\tcmpq %r14, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:167
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovslq %ebx, %rbx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1155
    "\tmovq 8(%rdx), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1156
    "\tandl $30, %ecx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1157
    "\tcmpl $20, %ecx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1158
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByValNotInt32) "\n"
    "\tcmpl -8(%rax), %ebx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1129
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__outOfBounds) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeResult)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__65_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__65_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__65_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__65_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1162
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovq %rdx, 0(%rax, %rbx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1163
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__outOfBounds)
    "\tcmpl -4(%rax), %ebx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1136
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opPutByValOutOfBounds) "\n"
    "\tmovq 32(%r10, %rsi, 8), %rcx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1138
    "\tmovb $1, 16(%rcx)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1139
    "\tleal 1(%ebx), %ecx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1141
    "\tmovl %ecx, -8(%rax)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1142
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeResult) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1143

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValNotInt32)
    "\tcmpl $22, %ecx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1167
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByValNotDouble) "\n"
    "\tcmpl -8(%rax), %ebx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1129
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_66_contiguousPutByVal__outOfBounds) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_66_contiguousPutByVal__storeResult)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__66_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__66_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__66_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__66_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1171
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__notInt) "\n"
    "\tcvtsi2sd %edx, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1172
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__ready) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1173

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__notInt)
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1175
    "\tmovq %rdx, %xmm0\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1176
    "\tucomisd %xmm0, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1177
    "\tjp " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__ready)
    "\tmovsd %xmm0, 0(%rax, %rbx, 8)\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1179
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_66_contiguousPutByVal__outOfBounds)
    "\tcmpl -4(%rax), %ebx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1136
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opPutByValOutOfBounds) "\n"
    "\tmovq 32(%r10, %rsi, 8), %rcx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1138
    "\tmovb $1, 16(%rcx)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1139
    "\tleal 1(%ebx), %ecx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1141
    "\tmovl %ecx, -8(%rax)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1142
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_66_contiguousPutByVal__storeResult) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1143

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValNotDouble)
    "\tcmpl $26, %ecx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1183
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByValNotContiguous) "\n"
    "\tcmpl -8(%rax), %ebx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1129
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_67_contiguousPutByVal__outOfBounds) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_67_contiguousPutByVal__storeResult)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__67_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__67_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__67_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__67_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rax, %rbx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1188
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_67_contiguousPutByVal__outOfBounds)
    "\tcmpl -4(%rax), %ebx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1136
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opPutByValOutOfBounds) "\n"
    "\tmovq 32(%r10, %rsi, 8), %rcx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1138
    "\tmovb $1, 16(%rcx)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1139
    "\tleal 1(%ebx), %ecx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1141
    "\tmovl %ecx, -8(%rax)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1142
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_67_contiguousPutByVal__storeResult) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1143

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValNotContiguous)
    "\tcmpl $28, %ecx\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1192
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tcmpl -4(%rax), %ebx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1193
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opPutByValOutOfBounds) "\n"
    "\tcmpq $0, 16(%rax, %rbx, 8)\n"                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1194
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opPutByValArrayStorageEmpty) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValArrayStorageStoreResult)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_68_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_68_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_68_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_68_loadConstantOrVariable__done)
    "\tmovq %rdx, 16(%rax, %rbx, 8)\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1199
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValArrayStorageEmpty)
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovb $1, 16(%rdx)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1205
    "\taddl $1, 12(%rax)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1207
    "\tcmpl -8(%rax), %ebx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1208
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opPutByValArrayStorageStoreResult) "\n"
    "\tleal 1(%ebx), %edx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1209
    "\tmovl %edx, -8(%rax)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1210
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opPutByValArrayStorageStoreResult) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1211

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValOutOfBounds)
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovb $1, 17(%rax)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1216

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_jmp)
    "\taddl 8(%r10, %rsi, 8), %esi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_jeq_null)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1248
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1249
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_equalNull__immediate) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1250
    "\ttestb $1, 93(%rcx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1267
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_equalNull__cellHandler__notMasqueradesAsUndefined) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1268
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1269
    "\tcmpq %rax, 8(%rcx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1270
    "\tje " LOCAL_LABEL_STRING(_offlineasm_equalNull__target) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNull__cellHandler__notMasqueradesAsUndefined)
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNull__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNull__immediate)
    "\tandq $-9, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1258
    "\tcmpq $2, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1273
    "\tje " LOCAL_LABEL_STRING(_offlineasm_equalNull__target) "\n"
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_jneq_null)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1248
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1249
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_68_equalNull__immediate) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1250
    "\ttestb $1, 93(%rcx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1280
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_68_equalNull__target) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1281
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1282
    "\tcmpq %rax, 8(%rcx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1283
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_68_equalNull__target) "\n"
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_68_equalNull__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_68_equalNull__immediate)
    "\tandq $-9, %rax\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1258
    "\tcmpq $2, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1285
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_68_equalNull__target) "\n"
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_jneq_ptr)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1292
    "\tmovq 40(%rcx), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1293
    "\tmovq 896(%rcx, %rdx, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1294
    "\tcmpq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1295
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opJneqPtrTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opJneqPtrTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_switch_imm)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_69_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_69_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_69_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_69_loadConstantOrVariable__done)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1349
    "\tmovq 600(%rcx), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1350
    "\timull $48, %ebx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1351
    "\tmovq 32(%rcx), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1352
    "\taddq %rbx, %rcx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1353
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1354
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmNotInt) "\n"
    "\tsubl 16(%rcx), %edx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1355
    "\tcmpl 12(%rcx), %edx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1356
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmFallThrough) "\n"
    "\tmovq 0(%rcx), %rbx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1357
    "\tmovslq 0(%rbx, %rdx, 4), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1358
    "\ttestl %edx, %edx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1359
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmFallThrough) "\n"
    "\taddq %rdx, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchImmNotInt)
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1363
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmSlow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchImmFallThrough)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchImmSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_switch_imm) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_switch_char)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_70_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_70_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_70_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_70_loadConstantOrVariable__done)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1377
    "\tmovq 600(%rcx), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1378
    "\timull $48, %ebx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1379
    "\tmovq 32(%rcx), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1380
    "\taddq %rbx, %rcx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1381
    "\ttestq %r15, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1382
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tmovq 0(%rdx), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1383
    "\tcmpb $5, 92(%rax)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1384
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tcmpl $1, 12(%rdx)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1385
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tmovq 16(%rdx), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1386
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1387
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opSwitchOnRope) "\n"
    "\tmovq 8(%rax), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1388
    "\ttestl $32, 24(%rax)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1389
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opSwitchChar8Bit) "\n"
    "\tmovzwl 0(%rdx), %eax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1390
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1391

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchChar8Bit)
    "\tmovzbl 0(%rdx), %eax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1393

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchCharReady)
    "\tsubl 16(%rcx), %eax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1395
    "\tcmpl 12(%rcx), %eax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1396
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tmovq 0(%rcx), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1397
    "\tmovslq 0(%rcx, %rax, 4), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1398
    "\ttestl %edx, %edx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1399
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\taddq %rdx, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchCharFallThrough)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchOnRope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_switch_char) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_new_func)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\ttestl %ecx, %ecx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1413
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNewFuncUnchecked) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $0, 0(%r13, %rdx, 8)\n"                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1415
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opNewFuncDone) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNewFuncUnchecked)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_func) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNewFuncDone)
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_tear_off_activation)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1461
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opTearOffActivationNotCreated) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_tear_off_activation) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opTearOffActivationNotCreated)
    "\taddq $2, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_tear_off_arguments)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tsubl $1, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1470
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1471
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opTearOffArgumentsNotCreated) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_tear_off_arguments) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opTearOffArgumentsNotCreated)
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_ret)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:259
    "\taddl $10, 560(%rax)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:260
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForEpilogue__checkSwitchToJIT__continue) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_replace) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForEpilogue__checkSwitchToJIT__continue)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_71_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_71_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_71_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_71_loadConstantOrVariable__done)
    "\tmovq -16(%r13), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:408
    "\tmovq -40(%r13), %r13\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:409
    "\tpush %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:214
    "\tret\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:411

OFFLINE_ASM_OPCODE_LABEL(op_ret_object_or_this)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:259
    "\taddl $10, 560(%rax)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:260
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForEpilogue__71_checkSwitchToJIT__continue) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_replace) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForEpilogue__71_checkSwitchToJIT__continue)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_72_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_72_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_72_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_72_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1490
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opRetObjectOrThisNotObject) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1491
    "\tcmpb $17, 92(%rcx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1492
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opRetObjectOrThisNotObject) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:408
    "\tmovq -40(%r13), %r13\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:409
    "\tpush %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:214
    "\tret\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:411

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opRetObjectOrThisNotObject)
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_73_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_73_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_73_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_73_loadConstantOrVariable__done)
    "\tmovq -16(%r13), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:408
    "\tmovq -40(%r13), %r13\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:409
    "\tpush %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:214
    "\tret\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:411

OFFLINE_ASM_OPCODE_LABEL(op_to_primitive)
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_74_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_74_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_74_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_74_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1506
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opToPrimitiveIsImm) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1507
    "\tcmpb $5, 92(%rcx)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1508
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opToPrimitiveSlowCase) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToPrimitiveIsImm)
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1510
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToPrimitiveSlowCase)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_to_primitive) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_next_pname)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 32(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovl 0(%r13, %rdx, 8), %eax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1524
    "\tcmpl 0(%r13, %rcx, 8), %eax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1525
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opNextPnameEnd) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rcx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1528
    "\tmovq 40(%rcx), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1529
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1530
    "\taddl $1, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1531
    "\tmovl %eax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1532
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1534
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rbx, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1537
    "\tmovq 0(%rbx), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1538
    "\tcmpq 8(%rcx), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1539
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opNextPnameSlow) "\n"
    "\tmovq 16(%rcx), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1540
    "\tmovq 8(%rax), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1541
    "\tcmpq $0, 0(%rax)\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1542
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNextPnameTarget) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameCheckPrototypeLoop)
    "\tcmpq $2, 16(%rdx)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1544
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opNextPnameSlow) "\n"
    "\tmovq 16(%rdx), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1545
    "\tmovq 0(%rcx), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1546
    "\tcmpq 0(%rax), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1547
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opNextPnameSlow) "\n"
    "\taddq $8, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1548
    "\tcmpq $0, 0(%rax)\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1549
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opNextPnameCheckPrototypeLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameTarget)
    "\taddl 48(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameEnd)
    "\taddq $7, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_next_pname) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_catch)
    "\tmovq %rax, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1568
    "\tmovq -8(%r13), %r10\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1569
    "\tmovq 104(%r10), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1570
    "\tmovq 112(%rsp), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1571
    "\tmovq 43432(%rbx), %rsi\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1572
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1573
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1574
    "\tmovq 43376(%rbx), %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1575
    "\tmovq $0, 43376(%rbx)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1576
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1578
    "\taddq $2, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_end)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:259
    "\taddl $10, 560(%rax)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:260
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForEpilogue__74_checkSwitchToJIT__continue) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_replace) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForEpilogue__74_checkSwitchToJIT__continue)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1588
    "\tmovq -16(%r13), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:408
    "\tmovq -40(%r13), %r13\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:409
    "\tpush %rcx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:214
    "\tret\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:411

OFFLINE_ASM_GLUE_LABEL(llint_throw_from_slow_path_trampoline)
    "\tmovq 112(%rsp), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1596
    "\tmovq 36808(%rdx), %r13\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1597
    "\tmovq 43416(%rdx), %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1598
    "\tjmp *43424(%rdx)\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1599

OFFLINE_ASM_GLUE_LABEL(llint_throw_during_call_trampoline)
    "\tpop %rcx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:201
    "\tmovq 112(%rsp), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1604
    "\tmovq 36808(%rdx), %r13\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1605
    "\tmovq 43416(%rdx), %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1606
    "\tjmp *43424(%rdx)\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1607

OFFLINE_ASM_OPCODE_LABEL(op_resolve_scope)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\ttestl  %eax, %eax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1708
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_rGlobalVar) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1667
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1668
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1670
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_rGlobalVar)
    "\tcmpl $1, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1713
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_rClosureVar) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1667
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1668
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1670
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_rClosureVar)
    "\tcmpl $2, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1718
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_rGlobalPropertyWithVarInjectionChecks) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1681
    "\tmovslq 32(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpb $0, 125(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1683
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_resolveScope__resolveScopeAfterActivationCheck) "\n"
    "\tmovslq 120(%rax), %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1684
    "\tcmpq $0, 0(%r13, %rdx, 8)\n"                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1685
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_resolveScope__resolveScopeAfterActivationCheck) "\n"
    "\taddl $1, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1686

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveScope__resolveScopeAfterActivationCheck)
    "\tmovq -24(%r13), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1689
    "\ttestl %ecx, %ecx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1690
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_resolveScope__resolveScopeLoopEnd) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveScope__resolveScopeLoop)
    "\tmovq 16(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1693
    "\tsubl $1, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1694
    "\ttestl %ecx, %ecx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1695
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_resolveScope__resolveScopeLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveScope__resolveScopeLoopEnd)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1699
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_rGlobalPropertyWithVarInjectionChecks)
    "\tcmpl $3, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1723
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_rGlobalVarWithVarInjectionChecks) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1674
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1675
    "\tmovq 952(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1676
    "\tcmpb $0, 41(%rax)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1677
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_rDynamic) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1667
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1668
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1670
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_rGlobalVarWithVarInjectionChecks)
    "\tcmpl $4, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1729
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_rClosureVarWithVarInjectionChecks) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1674
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1675
    "\tmovq 952(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1676
    "\tcmpb $0, 41(%rax)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1677
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_rDynamic) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1667
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1668
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1670
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_rClosureVarWithVarInjectionChecks)
    "\tcmpl $5, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1735
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_rDynamic) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1674
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1675
    "\tmovq 952(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1676
    "\tcmpb $0, 41(%rax)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1677
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_rDynamic) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1681
    "\tmovslq 32(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpb $0, 125(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1683
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_74_resolveScope__resolveScopeAfterActivationCheck) "\n"
    "\tmovslq 120(%rax), %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1684
    "\tcmpq $0, 0(%r13, %rdx, 8)\n"                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1685
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_74_resolveScope__resolveScopeAfterActivationCheck) "\n"
    "\taddl $1, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1686

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_74_resolveScope__resolveScopeAfterActivationCheck)
    "\tmovq -24(%r13), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1689
    "\ttestl %ecx, %ecx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1690
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_74_resolveScope__resolveScopeLoopEnd) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_74_resolveScope__resolveScopeLoop)
    "\tmovq 16(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1693
    "\tsubl $1, %ecx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1694
    "\ttestl %ecx, %ecx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1695
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_74_resolveScope__resolveScopeLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_74_resolveScope__resolveScopeLoopEnd)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1699
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_rDynamic)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_scope) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_get_from_scope)
    "\tmovslq 32(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tandl $65535, %eax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1780
    "\ttestl  %eax, %eax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1783
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_gGlobalVar) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1747
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1749
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_gDynamic) "\n"
    "\tmovslq 48(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpl $100, %edx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:818
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_getProperty__74_loadPropertyAtVariableOffset__isInline) "\n"
    "\tmovq 8(%rax), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:819
    "\tnegl %edx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:820
    "\tmovslq %edx, %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:821
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getProperty__74_loadPropertyAtVariableOffset__ready) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:822

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getProperty__74_loadPropertyAtVariableOffset__isInline)
    "\taddq $-768, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:824

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getProperty__74_loadPropertyAtVariableOffset__ready)
    "\tmovq 784(%rax, %rdx, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:826
    "\tmovq 56(%r10, %rsi, 8), %rax\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rcx, 24(%rax)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1757
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_gGlobalVar)
    "\tcmpl $1, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1789
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_gClosureVar) "\n"
    "\tmovq 48(%r10, %rsi, 8), %rax\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq 0(%rax), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1762
    "\tmovq 56(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rdx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1765
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_gClosureVar)
    "\tcmpl $2, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1794
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_gGlobalPropertyWithVarInjectionChecks) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149
    "\tmovq 32(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1769
    "\tmovslq 48(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1771
    "\tmovq 56(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rdx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1774
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_gGlobalPropertyWithVarInjectionChecks)
    "\tcmpl $3, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1800
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_gGlobalVarWithVarInjectionChecks) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1747
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1749
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_gDynamic) "\n"
    "\tmovslq 48(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpl $100, %edx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:818
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_getProperty__75_loadPropertyAtVariableOffset__isInline) "\n"
    "\tmovq 8(%rax), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:819
    "\tnegl %edx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:820
    "\tmovslq %edx, %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:821
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getProperty__75_loadPropertyAtVariableOffset__ready) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:822

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getProperty__75_loadPropertyAtVariableOffset__isInline)
    "\taddq $-768, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:824

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getProperty__75_loadPropertyAtVariableOffset__ready)
    "\tmovq 784(%rax, %rdx, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:826
    "\tmovq 56(%r10, %rsi, 8), %rax\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rcx, 24(%rax)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1757
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_gGlobalVarWithVarInjectionChecks)
    "\tcmpl $4, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1806
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_gClosureVarWithVarInjectionChecks) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1674
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1675
    "\tmovq 952(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1676
    "\tcmpb $0, 41(%rax)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1677
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_gDynamic) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149
    "\tmovq 48(%r10, %rsi, 8), %rax\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq 0(%rax), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1762
    "\tmovq 56(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rdx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1765
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_gClosureVarWithVarInjectionChecks)
    "\tcmpl $5, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1813
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_gDynamic) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1674
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1675
    "\tmovq 952(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1676
    "\tcmpb $0, 41(%rax)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1677
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_gDynamic) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149
    "\tmovq 32(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1769
    "\tmovslq 48(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1771
    "\tmovq 56(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rdx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1774
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_gDynamic)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_from_scope) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_put_to_scope)
    "\tmovslq 32(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tandl $65535, %eax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1850
    "\ttestl  %eax, %eax\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1853
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_pGlobalVar) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1747
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1749
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_pDynamic) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putProperty__75_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putProperty__75_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putProperty__75_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rcx), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putProperty__75_loadConstantOrVariable__done)
    "\tmovslq 48(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpl $100, %edx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:831
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_putProperty__storePropertyAtVariableOffset__isInline) "\n"
    "\tmovq 8(%rax), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:832
    "\tnegl %edx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:833
    "\tmovslq %edx, %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:834
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putProperty__storePropertyAtVariableOffset__ready) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:835

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putProperty__storePropertyAtVariableOffset__isInline)
    "\taddq $-768, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:837

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putProperty__storePropertyAtVariableOffset__ready)
    "\tmovq %rcx, 784(%rax, %rdx, 8)\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:839
    "\taddq $7, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_pGlobalVar)
    "\tcmpl $1, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1859
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_pClosureVar) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putGlobalVar__76_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putGlobalVar__76_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putGlobalVar__76_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putGlobalVar__76_loadConstantOrVariable__done)
    "\tmovq 48(%r10, %rsi, 8), %rax\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1835
    "\taddq $7, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_pClosureVar)
    "\tcmpl $2, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1864
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_pGlobalPropertyWithVarInjectionChecks) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putClosureVar__77_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putClosureVar__77_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putClosureVar__77_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rcx), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putClosureVar__77_loadConstantOrVariable__done)
    "\tmovq 32(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1841
    "\tmovslq 48(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rcx, 0(%rax, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1843
    "\taddq $7, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_pGlobalPropertyWithVarInjectionChecks)
    "\tcmpl $3, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1870
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_pGlobalVarWithVarInjectionChecks) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1747
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tcmpq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1749
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_pDynamic) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putProperty__78_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putProperty__78_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putProperty__78_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rcx), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putProperty__78_loadConstantOrVariable__done)
    "\tmovslq 48(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpl $100, %edx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:831
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_putProperty__78_storePropertyAtVariableOffset__isInline) "\n"
    "\tmovq 8(%rax), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:832
    "\tnegl %edx\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:833
    "\tmovslq %edx, %rdx\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:834
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putProperty__78_storePropertyAtVariableOffset__ready) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:835

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putProperty__78_storePropertyAtVariableOffset__isInline)
    "\taddq $-768, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:837

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putProperty__78_storePropertyAtVariableOffset__ready)
    "\tmovq %rcx, 784(%rax, %rdx, 8)\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:839
    "\taddq $7, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_pGlobalVarWithVarInjectionChecks)
    "\tcmpl $4, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1876
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_pClosureVarWithVarInjectionChecks) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1674
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1675
    "\tmovq 952(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1676
    "\tcmpb $0, 41(%rax)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1677
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_pDynamic) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putGlobalVar__79_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putGlobalVar__79_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putGlobalVar__79_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putGlobalVar__79_loadConstantOrVariable__done)
    "\tmovq 48(%r10, %rsi, 8), %rax\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rdx, 0(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1835
    "\taddq $7, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_pClosureVarWithVarInjectionChecks)
    "\tcmpl $5, %eax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1882
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_pDynamic) "\n"
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1674
    "\tmovq 40(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1675
    "\tmovq 952(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1676
    "\tcmpb $0, 41(%rax)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1677
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_pDynamic) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putClosureVar__80_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putClosureVar__80_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putClosureVar__80_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rcx), %rcx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putClosureVar__80_loadConstantOrVariable__done)
    "\tmovq 32(%rax), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1841
    "\tmovslq 48(%r10, %rsi, 8), %rdx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rcx, 0(%rax, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1843
    "\taddq $7, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_pDynamic)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_to_scope) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $7, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_new_array)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_array) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_new_array_with_size)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_array_with_size) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_new_array_buffer)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_array_buffer) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_new_regexp)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_regexp) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_less)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_less) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_lesseq)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_lesseq) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_greater)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_greater) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_greatereq)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_greatereq) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_mod)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_mod) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_typeof)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_typeof) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_is_object)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_is_object) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_is_function)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_is_function) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_in)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_in) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_del_by_id)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_del_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_del_by_val)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_del_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_put_by_index)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_by_index) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_put_getter_setter)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_getter_setter) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_jtrue)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__81_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__81_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__81_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__81_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1231
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1232
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__slow) "\n"
    "\ttestl %eax, %eax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:582
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__target) "\n"
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jtrue) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jfalse)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__82_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__82_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__82_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rdx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__82_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1231
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1232
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_82_jumpTrueOrFalse__slow) "\n"
    "\ttestl %eax, %eax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:589
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_82_jumpTrueOrFalse__target) "\n"
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_82_jumpTrueOrFalse__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_82_jumpTrueOrFalse__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jfalse) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jless)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__83_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__83_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__83_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__83_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__84_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__84_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__84_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__84_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:596
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tmovq %rax, %xmm0\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323
    "\tucomisd %xmm0, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tja " LOCAL_LABEL_STRING(_offlineasm_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1328
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1331
    "\tucomisd %xmm0, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tja " LOCAL_LABEL_STRING(_offlineasm_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jless) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jnless)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__85_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__85_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__85_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__85_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__86_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__86_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__86_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__86_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_86_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_86_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:604
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_86_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_86_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_86_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_86_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_86_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_86_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_86_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_86_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tmovq %rax, %xmm0\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323
    "\tucomisd %xmm0, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:605
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_86_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_86_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1328
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_86_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1331
    "\tucomisd %xmm0, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:605
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_86_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_86_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_86_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jnless) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jgreater)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__87_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__87_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__87_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__87_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__88_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__88_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__88_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__88_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_88_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_88_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:612
    "\tjg " LOCAL_LABEL_STRING(_offlineasm_88_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_88_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_88_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_88_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_88_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_88_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_88_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_88_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tmovq %rax, %xmm0\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323
    "\tucomisd %xmm1, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:613
    "\tja " LOCAL_LABEL_STRING(_offlineasm_88_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_88_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1328
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_88_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1331
    "\tucomisd %xmm1, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:613
    "\tja " LOCAL_LABEL_STRING(_offlineasm_88_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_88_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_88_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jgreater) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jngreater)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__89_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__89_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__89_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__89_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__90_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__90_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__90_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__90_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_90_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_90_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:620
    "\tjle " LOCAL_LABEL_STRING(_offlineasm_90_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_90_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_90_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_90_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_90_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_90_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_90_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_90_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tmovq %rax, %xmm0\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323
    "\tucomisd %xmm1, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:621
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_90_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_90_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1328
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_90_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1331
    "\tucomisd %xmm1, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:621
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_90_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_90_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_90_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jngreater) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jlesseq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__91_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__91_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__91_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__91_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__92_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__92_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__92_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__92_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_92_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_92_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:628
    "\tjle " LOCAL_LABEL_STRING(_offlineasm_92_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_92_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_92_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_92_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_92_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_92_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_92_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_92_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tmovq %rax, %xmm0\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323
    "\tucomisd %xmm0, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:629
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_92_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_92_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1328
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_92_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1331
    "\tucomisd %xmm0, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:629
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_92_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_92_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_92_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jlesseq) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jnlesseq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__93_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__93_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__93_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__93_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__94_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__94_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__94_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__94_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_94_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_94_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:636
    "\tjg " LOCAL_LABEL_STRING(_offlineasm_94_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_94_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_94_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_94_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_94_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_94_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_94_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_94_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tmovq %rax, %xmm0\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323
    "\tucomisd %xmm0, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:637
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_94_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_94_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1328
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_94_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1331
    "\tucomisd %xmm0, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:637
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_94_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_94_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_94_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jnlesseq) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jgreatereq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__95_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__95_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__95_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__95_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__96_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__96_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__96_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__96_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_96_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_96_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:644
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_96_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_96_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_96_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_96_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_96_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_96_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_96_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_96_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tmovq %rax, %xmm0\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323
    "\tucomisd %xmm1, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:645
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_96_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_96_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1328
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_96_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1331
    "\tucomisd %xmm1, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:645
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_96_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_96_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_96_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jgreatereq) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jngreatereq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tcmpq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__97_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__97_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__97_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rax), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rcx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__97_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__98_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__98_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__98_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rdx), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rbx\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__98_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1307
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_98_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1308
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_98_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:652
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_98_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_98_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1313
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_98_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_98_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_98_compare__op1NotIntReady) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1316

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_98_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1318
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_98_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1319
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_98_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tmovq %rax, %xmm0\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323
    "\tucomisd %xmm1, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:653
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_98_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_98_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1328
    "\ttestq %r14, %rdx\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_98_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tmovq %rdx, %xmm1\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1331
    "\tucomisd %xmm1, %xmm0\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:653
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_98_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_98_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:36
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_98_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jngreatereq) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_loop_hint)
    "\tmovq 112(%rsp), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:659
    "\tmovzbl 36816(%rdx), %eax\n"                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:660
    "\ttestb %al, %al\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:661
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_handleWatchdogTimer) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_afterWatchdogTimerCheck)
    "\tmovq -8(%r13), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:259
    "\taddl $1, 560(%rax)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:260
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForLoop__98_checkSwitchToJIT__continue) "\n"
    "\tmovl %esi, -44(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:135
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_loop_osr) "\n"
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:138
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:139
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForLoop__checkSwitchToJIT__action__recover) "\n"
    "\tjmp *%rax\n"                                          // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:140

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForLoop__checkSwitchToJIT__action__recover)
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:142
    "\tmovl -44(%r13), %esi\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:143

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForLoop__98_checkSwitchToJIT__continue)
    "\taddq $1, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_handleWatchdogTimer)
    "\tmovl %esi, -44(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:122
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_handle_watchdog_timer) "\n"
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:125
    "\ttestq %rax, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:126
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_throwHandler) "\n"
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:127
    "\tmovl -44(%r13), %esi\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:128
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_afterWatchdogTimerCheck) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:667

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_throwHandler)
    "\tjmp " LOCAL_REFERENCE(llint_throw_from_slow_path_trampoline) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:669

OFFLINE_ASM_OPCODE_LABEL(op_switch_string)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_switch_string) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_new_func_exp)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_func_exp) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_call)
    "\tmovslq 32(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq -56(%r13, %rbx, 8), %rax\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1425
    "\ttestq %r15, %rax\n"                                   // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1426
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_arrayProfileForCall__done) "\n"
    "\tmovq 0(%rax), %rax\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1427
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 8(%rdx)\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1429

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_arrayProfileForCall__done)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq 16(%rdx), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1437
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_doCall__99_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_doCall__99_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__99_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rbx), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__99_loadConstantOrVariable__done)
    "\tcmpq %rcx, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1439
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_doCall__opCallSlow) "\n"
    "\tmovslq 32(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tsall $3, %ebx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1441
    "\taddq %r13, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1442
    "\tmovq 32(%rcx), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1443
    "\tmovq %rcx, -32(%rbx)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1444
    "\tmovq %rax, -24(%rbx)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1445
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovl %esi, -44(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1447
    "\tmovq %r13, -40(%rbx)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1448
    "\tmovl %ecx, -48(%rbx)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1449
    "\tmovq %rbx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1450
    "\tcall *32(%rdx)\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:230
    "\tmovl -44(%r13), %esi\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:45
    "\tmovq -8(%r13), %r10\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tmovq 104(%r10), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tmovq 56(%r10, %rsi, 8), %rcx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rcx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__opCallSlow)
    "\tmovl %esi, -44(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:114
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call) "\n"
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:117
    "\tcall *%rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:242
    "\tmovl -44(%r13), %esi\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:45
    "\tmovq -8(%r13), %r10\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tmovq 104(%r10), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tmovq 56(%r10, %rsi, 8), %rcx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rcx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_construct)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq 16(%rdx), %rcx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1437
    "\tcmpq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_doCall__100_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:155
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_doCall__100_loadConstantOrVariable__done) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:156

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__100_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:158
    "\tmovq 504(%rbx), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:159
    "\tsubq $1073741824, %rax\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:161

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__100_loadConstantOrVariable__done)
    "\tcmpq %rcx, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1439
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_100_doCall__opCallSlow) "\n"
    "\tmovslq 32(%r10, %rsi, 8), %rbx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tsall $3, %ebx\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1441
    "\taddq %r13, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1442
    "\tmovq 32(%rcx), %rax\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1443
    "\tmovq %rcx, -32(%rbx)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1444
    "\tmovq %rax, -24(%rbx)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1445
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovl %esi, -44(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1447
    "\tmovq %r13, -40(%rbx)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1448
    "\tmovl %ecx, -48(%rbx)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1449
    "\tmovq %rbx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1450
    "\tcall *32(%rdx)\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:230
    "\tmovl -44(%r13), %esi\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:45
    "\tmovq -8(%r13), %r10\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tmovq 104(%r10), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tmovq 56(%r10, %rsi, 8), %rcx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rcx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_100_doCall__opCallSlow)
    "\tmovl %esi, -44(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:114
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_construct) "\n"
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:117
    "\tcall *%rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:242
    "\tmovl -44(%r13), %esi\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:45
    "\tmovq -8(%r13), %r10\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tmovq 104(%r10), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tmovq 56(%r10, %rsi, 8), %rcx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rcx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_call_varargs)
    "\tmovl %esi, -44(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:114
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call_varargs) "\n"
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:117
    "\tcall *%rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:242
    "\tmovl -44(%r13), %esi\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:45
    "\tmovq -8(%r13), %r10\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tmovq 104(%r10), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tmovq 56(%r10, %rsi, 8), %rcx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rcx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_call_eval)
    "\tmovl %esi, -44(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:114
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call_eval) "\n"
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:117
    "\tcall *%rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:242
    "\tmovl -44(%r13), %esi\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:45
    "\tmovq -8(%r13), %r10\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tmovq 104(%r10), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tmovq 56(%r10, %rsi, 8), %rcx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rcx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_GLUE_LABEL(llint_generic_return_point)
    "\tmovl -44(%r13), %esi\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:45
    "\tmovq -8(%r13), %r10\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tmovq 104(%r10), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:47
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:81
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:49
    "\tmovq 56(%r10, %rsi, 8), %rcx\n"                       // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:85
    "\tmovq %rax, 24(%rcx)\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:182
    "\taddq $8, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_strcat)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(slow_path_strcat) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_get_pnames)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_pnames) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_push_with_scope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_push_with_scope) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $2, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_pop_scope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_pop_scope) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $1, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_push_name_scope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_push_name_scope) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $4, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_throw)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_throw) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $2, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_throw_static_error)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_throw_static_error) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_profile_will_call)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_profile_will_call) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $2, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_profile_did_call)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_profile_did_call) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $2, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_OPCODE_LABEL(op_debug)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_slow_path_debug) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_GLUE_LABEL(llint_native_call_trampoline)
    "\tmovq $0, -8(%r13)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1611
    "\tmovq 120(%rsp), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1613
    "\tmovq %r13, 36808(%rax)\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1614
    "\tmovq -40(%r13), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1615
    "\tmovq -24(%rax), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1616
    "\tmovq %rdx, -24(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1617
    "\tmovq 0(%rsp), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1618
    "\tmovq %rdx, -16(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1619
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1620
    "\tsubq $8, %rsp\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1621
    "\tmovq -32(%r13), %rsi\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1622
    "\tmovq 24(%rsi), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1623
    "\tmovq %rax, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1624
    "\tcall *64(%rdx)\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1625
    "\taddq $8, %rsp\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1626
    "\tmovq 120(%rsp), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1627
    "\tcmpq $0, 43376(%rbx)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1652
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_nativeCallTrampoline__exception) "\n"
    "\tret\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1653

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_nativeCallTrampoline__exception)
    "\tpop %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:201
    "\tmovl -44(%r13), %esi\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1656
    "\tmovq -8(%r13), %r10\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1657
    "\tmovq 104(%r10), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1658
    "\tmovq 112(%rsp), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1659
    "\tmovq %r13, 36808(%rax)\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1660
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_throw_from_native_call) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\tjmp " LOCAL_REFERENCE(llint_throw_from_slow_path_trampoline) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1662

OFFLINE_ASM_GLUE_LABEL(llint_native_construct_trampoline)
    "\tmovq $0, -8(%r13)\n"                                  // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1611
    "\tmovq 120(%rsp), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1613
    "\tmovq %r13, 36808(%rax)\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1614
    "\tmovq -40(%r13), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1615
    "\tmovq -24(%rax), %rdx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1616
    "\tmovq %rdx, -24(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1617
    "\tmovq 0(%rsp), %rdx\n"                                 // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1618
    "\tmovq %rdx, -16(%r13)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1619
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1620
    "\tsubq $8, %rsp\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1621
    "\tmovq -32(%r13), %rsi\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1622
    "\tmovq 24(%rsi), %rdx\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1623
    "\tmovq %rax, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1624
    "\tcall *72(%rdx)\n"                                     // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1625
    "\taddq $8, %rsp\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1626
    "\tmovq 120(%rsp), %rbx\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1627
    "\tcmpq $0, 43376(%rbx)\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1652
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_100_nativeCallTrampoline__exception) "\n"
    "\tret\n"                                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1653

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_100_nativeCallTrampoline__exception)
    "\tpop %rdx\n"                                           // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:201
    "\tmovl -44(%r13), %esi\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1656
    "\tmovq -8(%r13), %r10\n"                                // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1657
    "\tmovq 104(%r10), %r10\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1658
    "\tmovq 112(%rsp), %rax\n"                               // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1659
    "\tmovq %r13, 36808(%rax)\n"                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1660
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:82
    "\tmovq %r10, %rbx\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:83
    "\tmovq %r13, %rdi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:58
    "\tcall " LOCAL_REFERENCE(llint_throw_from_native_call) "\n"
    "\tmovq %rax, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:87
    "\tmovq %rdx, %r13\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:88
    "\tmovq %rbx, %r10\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tsubq %r10, %rsi\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tsarq $3, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:91
    "\tjmp " LOCAL_REFERENCE(llint_throw_from_slow_path_trampoline) "\n" // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1662

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_chain)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_custom_chain)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_custom_proto)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_custom_self)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_generic)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_getter_chain)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_getter_proto)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_getter_self)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_proto)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_self)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_get_string_length)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_generic)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_replace)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition)
    "\tint $3\n"                                             // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:824

OFFLINE_ASM_OPCODE_LABEL(op_init_global_const_nop)
    "\taddq $5, %rsi\n"                                      // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:31
    "\tjmp *0(%r10, %rsi, 8)\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:27

OFFLINE_ASM_GLUE_LABEL(llint_end)
    "\tmovl %eax, 3148725999\n"                              // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:180
    "\txorq %rax, %rax\n"                                    // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:181
    "\tcall *%rax\n"                                         // ./Source/JavaScriptCore/llint/LowLevelInterpreter.asm:182
OFFLINE_ASM_END
#endif
