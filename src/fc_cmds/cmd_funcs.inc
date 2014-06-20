UB_COUNT = 0
macro define_ub name {
	name = UB_COUNT
	UB_COUNT = UB_COUNT + 1
}

define_ub UB_FASTRUN
define_ub UB_JUMPBUG
define_ub UB_STRAFE
define_ub UB_GROUNDSTRAFE

userButtons dd ?

unicodeBuffer dw 256 dup 0
sizeof.unicodeBuffer = $ - unicodeBuffer

string szCmdExecUsage, PREFIX, 'exec "script.cfg"'
string szCmdExecFailOpen, PREFIX, 'exec cannot open file "%s"'

wcsFmtPath du '%s\%s', 0
wcsScriptPath dw MAX_PATH + 1 dup ?

string szCmdExecFailHAlloc, PREFIX, 'exec failed to allocate memory for read buffer'
string szCmdExecFailRead, PREFIX, 'exec failed to read file'