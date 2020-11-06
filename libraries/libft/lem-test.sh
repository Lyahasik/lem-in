printf "test 1: "
if [ "$(printf '' | ./checker kek 2>&1 | grep "Error" | wc -l)" -eq 1 ]
then
echo "✅  - ./checker (non numeric parameter) (instr: none)"
else
echo "❌  - ./checker (non numeric parameter) (instr: none)"
fi
