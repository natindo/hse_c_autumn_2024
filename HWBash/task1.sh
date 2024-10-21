tar -xzvf /opt/hw1/datasets.tar.gz -C /tmp/

queries_file="/tmp/queries.txt"
features_file="/tmp/features.txt"

sort -t '\t' -k2,2 $queries_file > /tmp/sorted_queries.txt
sort -t '\t' -k1,1 $features_file > /tmp/sorted_features.txt

join -t $'\t' -1 2 -2 1 /tmp/sorted_queries.txt /tmp/sorted_features.txt

rm /tmp/sorted_queries.txt /tmp/sorted_features.txt /tmp/features.txt /tmp/queries.txt