PROG='../bin/LISReduction'

echo -e "\e[33m===========================\e[0m";
echo -e "\e[33m   Running BackTracking \e[0m";
echo -e "\e[33m===========================\e[0m\n";

for i in $(seq 0 9); do
	echo "[TOY $i]"
	$PROG < 'toys/b/entrada/toy_'$i > 'toys/b/saida/tp_toy_'$i;
	diff 'toys/b/saida/toy_'$i 'toys/b/saida/tp_toy_'$i;
done

echo -e "\n\e[32m===========================\e[0m";
echo -e "\e[32m     Running Greedy \e[0m";
echo -e "\e[32m===========================\e[0m\n";

for i in $(seq 0 9); do
        echo "[TOY $i]"
        $PROG < 'toys/g/entrada/toy_'$i > 'toys/g/saida/tp_toy_'$i;
        diff 'toys/g/saida/toy_'$i 'toys/g/saida/tp_toy_'$i;
done

echo -e "\n\e[36m===========================\e[0m";
echo -e "\e[36mRunning Dynamic Programming \e[0m";
echo -e "\e[36m===========================\e[0m\n";

for i in $(seq 0 9); do
	echo "[TOY $i]"
	$PROG < 'toys/d/entrada/toy_'$i > 'toys/d/saida/tp_toy_'$i;
	diff 'toys/d/saida/toy_'$i 'toys/d/saida/tp_toy_'$i;
done

echo -e "\n";
