n = 100000;
digits 4;
x = round(n*(rand(n,1)));
x = vpa(x(1:n/10));

fid = fopen('sequencia01.txt','w');
fprintf(fid,'%hd ',vpa(x(1:n/100)));
fclose(fid);

fid = fopen('sequencia02.txt','w');
fprintf(fid,'%hd ',vpa(x(1:n/50)));
fclose(fid);

fid = fopen('sequencia03.txt','w');
fprintf(fid,'%hd ',vpa(x(1:n/10)));
fclose(fid);