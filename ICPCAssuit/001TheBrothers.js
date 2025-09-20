function brothers (name1, name2) {
  name1Array = name1.trim().split(/\s+/);
  name2Array = name2.trim().split(/\s+/);

  if (name1Array[1] === name2Array[1]) {
    return "ARE Brothers";
  }
  else {
    return "NOT";
  }
}

console.log(brothers("Ahmed Elsaeed", "Mohamed Elsaeed"));