declare namespace NodeJS {
  interface Process {
    // TODO: Strictly type this based on the input maybe?
    atomBinding: (name: string) => any;
    log: NodeJS.WriteStream['write'];
  }
}
