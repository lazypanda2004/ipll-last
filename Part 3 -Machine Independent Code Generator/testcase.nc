// Add two numbers

integer globalVar = 10;
float pi = 3.14159;
char letter = 'A';
// Function declaration
integer add(integer a, integer b)
begin
    return a + b;
end

// Function with array parameter
void printArray(integer *arr, integer size)
begin
    integer i;
    for(i = 0; i < size; i = i + 1)
    begin
        // This is a function body
    end
    return;
end
// Function with pointer
integer* createArray(integer size)
begin
    integer* arr;
    return arr;
end

integer main() begin
integer numbers[10];
integer a = 5;
integer x = 2;
float y = 3;
integer a=1;
integer b=2;
integer c=3;
 if (a > b)
    begin
        a = a + 1;
    end
    else
    begin
        b = b - 1;
    end

    integer max = (a > b) ? a : b;

    do
    begin
        b = b - 1;
    end while (b > 0);

    for (a = 0; a < 10; a = a + 1)
    begin
        if (a == 5) continue;
        if (a == 8) break;
    end

    // Bitwise operations
    integer bits = a & b;
    bits = a | b;
    bits = a ^ b;
    bits = a << 2;
    bits = b >> 1;
a=b|c;
integer z;
integer* m;
z = x + y;
// Function calls
    integer sum = add(a, b);
    printArray(numbers, 10);
while(x<=1) begin
x = x-1;
z=x<<2;
end

for(i = 0; i < size; i = i + 1)
    begin
        // This is a function body
    end
return 0;
end