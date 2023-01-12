data_file = paste0(default_dir, "/wihs2.csv")
data = read.csv(data_file)
X = data[3:6]
Y = data[['time']]
D = data[['status']]

s.forest <- survival_forest(X, Y, D, num.trees=1, num.threads=1, honesty=FALSE, prediction.type = "Kaplan-Meier")
s.pred <- predict(s.forest, X[1,])