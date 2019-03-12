n = 1000;
digits 4;
x = round(n*(rand(n,1)));
x = vpa(x(1:n/10));
fid = fopen('sequencia.txt','w');
fprintf(fid,'%hd ',x);
fclose(fid);