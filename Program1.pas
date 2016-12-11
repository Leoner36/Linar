var x:string;
x1,i,l,S,k:integer;
begin
read(x);
l:=Length(x);
Val(x,x1,k);
S:=0;
for i:=l downto 0 do
if x1 div Round(power(10,i)) = 1 then
begin
S:=S+Round(power(2,i));
x1:=x1 mod Round(power(10,i));
end;
writeln(S);
end.


